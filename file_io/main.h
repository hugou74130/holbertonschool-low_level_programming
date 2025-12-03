#ifndef MAIN_H
#define MAIN_H

/**
 * main.h - Header file for file I/O utility functions
 * @author: Hugo Ramos (ou ton nom)
 *
 * Description: Prototypes et includes nécessaires pour:
 *  - read_textfile: lire et afficher le contenu d'un fichier texte
 *  - create_file: créer un fichier et y écrire du texte
 *  - append_text_to_file: ajouter du texte à la fin d'un fichier
 *
 * Ce fichier respecte le style de commentaire "Betty" :
 *  - bloc de commentaire en tête du fichier
 *  - commentaires de fonctions décrivant paramètres et valeur de retour
 */

#include <sys/types.h> /* ssize_t */
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h> /* read, write, close, ssize_t */
#include <stddef.h> /* size_t */
#include <stdio.h>
#include <stdlib.h>

/**
 * read_textfile - Reads a text file and prints it to POSIX stdout.
 * @filename: Pointer to the name of the file to read.
 * @letters: Number of letters to read and print.
 *
 * Return: The actual number of letters printed,
 *         or 0 if an error occurs.
 */
ssize_t read_textfile(const char *filename, size_t letters);

/**
 * create_file - Creates a file and writes text_content into it.
 * @filename: Name of the file to create.
 * @text_content: NULL-terminated string to write into the file.
 *
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content);

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: Name of the file to which to append.
 * @text_content: NULL-terminated string to append.
 *
 * Return: 1 on success, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content);

#endif /* MAIN_H */
