#ifndef MAIN_H
#define MAIN_H

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/* Exit codes */
#define EXIT_USAGE 97
#define EXIT_READ_ERROR 98
#define EXIT_WRITE_ERROR 99
#define EXIT_CLOSE_ERROR 100

/* Buffer size for file operations */
#define BUFFER_SIZE 1024

/* Function declarations */
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

#endif
