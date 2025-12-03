#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"

/**
 * read_textfile - reads a text file and prints it to POSIX stdout
 * @filename: name of the file to read
 * @letters: number of characters to read and print
 *
 * Return: actual number of letters read and printed,
 *         or 0 on any error.
 */
ssize_t read_textfile(const char *filename, size_t letters)
// Fonction qui lit un fichier texte et l'affiche sur la sortie standard POSIX
{
	int fd;
	ssize_t rd, wr;
	char *buffer;

	if (filename == NULL)
		return (0); // Si le nom du fichier est NULL, rien à lire

	fd = open(filename, O_RDONLY); // Ouvre le fichier en lecture seule
	if (fd == -1)
		return (0); // Erreur à l'ouverture

	buffer = malloc(sizeof(char) * letters); // Alloue un buffer pour les lettres à lire
	if (buffer == NULL)
	{
		close(fd); // Libère la ressource fichier
		return (0); // Erreur d'allocation
	}

	rd = read(fd, buffer, letters); // Lit les lettres demandées
	if (rd == -1)
	{
		free(buffer);
		close(fd); // Libère file descriptor
		return (0); // Erreur de lecture
	}

	wr = write(STDOUT_FILENO, buffer, rd); // Écrit le contenu lu sur la sortie standard
	if (wr == -1 || wr != rd)
	{
		free(buffer);
		close(fd);
		return (0); // Erreur d'écriture ou écriture incomplète
	}

	free(buffer); // Libère la mémoire allouée
	close(fd); // Ferme le fichier

	return (wr); // Retourne le nombre de caractères écrits
}
