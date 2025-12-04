#include <stdio.h>	// Pour dprintf()
#include <stdlib.h> // Pour exit()
#include <fcntl.h>	// Pour open(), O_RDONLY, O_WRONLY, etc.
#include <unistd.h> // Pour read(), write(), close()

#define BUFFER_SIZE 1024 // Taille du buffer utilisé pour copier les données

/**
 * close_fd - closes a file descriptor with error handling
 * @fd: file descriptor to close
 */
void close_fd(int fd)
{
	if (close(fd) == -1) // Si close échoue
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd); // Affiche une erreur sur stderr
		exit(100);												  // Quitte le programme avec le code d'erreur 100
	}
}

/**
 * error_read - prints read error and exits
 * @fd_from: source file descriptor to close
 * @fd_to: destination file descriptor to close (-1 if not open)
 * @filename: name of the file that caused the error
 */
void error_read(int fd_from, int fd_to, char *filename)
{
	if (fd_from != -1) // Si fd_from est ouvert, on le ferme
		close_fd(fd_from);
	if (fd_to != -1) // Si fd_to est ouvert, on le ferme
		close_fd(fd_to);
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename); // Affiche l'erreur
	exit(98);															  // Code d'erreur pour un problème de lecture
}

/**
 * error_write - prints write error and exits
 * @fd_from: source file descriptor to close
 * @fd_to: destination file descriptor to close (-1 if not open)
 * @filename: name of the file that caused the error
 */
void error_write(int fd_from, int fd_to, char *filename)
{
	if (fd_from != -1) // Ferme le fichier source si ouvert
		close_fd(fd_from);
	if (fd_to != -1) // Ferme le fichier destination si ouvert
		close_fd(fd_to);
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename); // Message d'erreur
	exit(99);														// Code d'erreur pour un problème d’écriture
}

/**
 * main - copies the content of a file to another file
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 on success, exits with error code on failure
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to;				   // Descripteurs de fichier source et destination
	ssize_t bytes_read, bytes_written; // Nombre d'octets lus puis écrits
	char buffer[BUFFER_SIZE];		   // Buffer pour stocker temporairement les données

	if (argc != 3) // Vérifie que l'utilisateur a bien fourni 2 arguments (source et destination)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97); // Sort avec le code d'erreur 97 (mauvais usage)
	}

	fd_from = open(argv[1], O_RDONLY); // Ouvre le fichier source en lecture seule
	if (fd_from == -1)				   // Échec de l'ouverture
		error_read(-1, -1, argv[1]);   // Appelle la fonction error_read

	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	// O_WRONLY : ouvrir en écriture
	// O_CREAT  : créer le fichier s’il n’existe pas
	// O_TRUNC  : remplacer le contenu existant
	// 0664     : permissions rw-rw-r--

	if (fd_to == -1) // Si l'ouverture du fichier destination échoue
		error_write(fd_from, -1, argv[2]);

	while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	// Lit jusqu'à BUFFER_SIZE octets dans le fichier source
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		// Écrit exactement le nombre d'octets lus

		if (bytes_written != bytes_read) // Si tous les octets n'ont pas été écrits
			error_write(fd_from, fd_to, argv[2]);
	}

	if (bytes_read == -1) // Si read a retourné une erreur
		error_read(fd_from, fd_to, argv[1]);

	close_fd(fd_from); // Ferme proprement le fichier source
	close_fd(fd_to);   // Ferme proprement le fichier destination

	return (0); // Succès
}
