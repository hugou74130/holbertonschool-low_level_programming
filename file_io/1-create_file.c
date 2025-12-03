#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of the file
 * @text_content: NULL-terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
// Fonction qui crée un fichier et y écrit text_content (ou le tronque si déjà existant)
{
	int fd, w, len = 0;

	if (filename == NULL)
		return (-1); // Si le nom de fichier est NULL, retourne erreur

	// Calcule la longueur de text_content si ce n'est pas NULL
	if (text_content != NULL)
	{
		while (text_content[len])
			len++;
	}

	// Création (ou troncature) du fichier, droit rw-------
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1); // Erreur d'ouverture/écriture

	// Si le contenu n'est pas NULL, on écrit dans le fichier
	if (text_content != NULL)
	{
		w = write(fd, text_content, len); // Écrit le texte calculé
		if (w == -1)
		{
			close(fd);
			return (-1); // Problème d'écriture
		}
	}

	close(fd); // Ferme le fichier
	return (1); // Succès
}
