#include "main.h"

/**
 * append_text_to_file - Appends text to the end of a file
 * @filename: Name of the file to append to
 * @text_content: NULL-terminated string to append to the file
 *
 * Description:
 * This function opens an existing file in append mode and writes the
 * provided text content to the end of the file. The file must exist
 * before calling this function. If text_content is NULL, the function
 * still returns 1 if the file exists and the caller has write permissions.
 *
 * Return: 1 on success, -1 on failure
 *
 * Error conditions:
 * - Returns -1 if filename is NULL
 * - Returns -1 if file does not exist
 * - Returns -1 if no write permissions on the file
 * - Returns -1 if file open operation fails
 * - Returns -1 if write operation fails
 * - Returns 1 if text_content is NULL but file exists and is writable
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;			 // Déclare une variable 'fd' pour stocker le descripteur de fichier
	ssize_t written; // Variable pour stocker le nombre d'octets réellement écrits
	size_t len;		 // Variable pour stocker la longueur de text_content

	if (filename == NULL) // Vérifie que filename n'est pas NULL
		return (-1);	  // Si NULL, impossible d’ouvrir un fichier → erreur

	fd = open(filename, O_WRONLY | O_APPEND);
	// Ouvre le fichier en écriture uniquement (O_WRONLY)
	// et en mode ajout à la fin du fichier (O_APPEND)

	if (fd == -1)	 // Si open() échoue, fd vaut -1
		return (-1); // On retourne -1 pour indiquer une erreur

	if (text_content == NULL) // Si text_content est NULL (rien à ajouter)
	{
		close(fd);	// On ferme juste le fichier correctement
		return (1); // Et on retourne 1 (succès sans écrire)
	}

	len = strlen(text_content);
	// Calcule la longueur du texte à écrire

	written = write(fd, text_content, len);
	// Écrit dans le fichier le contenu de text_content
	// write() retourne le nombre d'octets réellement écrits

	close(fd); // On ferme le fichier après l'écriture

	if (written == (ssize_t)len)
		// Si write() a écrit exactement tous les octets attendus
		return (1); // Succès

	return (-1); // Sinon, échec d'écriture
}
