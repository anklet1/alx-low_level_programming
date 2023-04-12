/*
 * Author: Felix Fleku
 * project: File I/O
*/

#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Reads the text files that are  printed to the  STDOUT
 * @filename: text file being read
 * @letters: number of letters to be read
 * Return: q - the number of bytes to be  read and printed out
 * Return 0 when  the function fails or when filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *file_p;
	ssize_t write_file;
	ssize_t file_open;
	ssize_t read_file;

	file_open = open(filename, O_RDONLY);
	if (file_open == -1)
		return (0);
	file_p = malloc(sizeof(char) * letters);
	read_file = read(file_open, file_p, letters);
	write_file = write(STDOUT_FILENO, file_p, read_file);

	free(file_p);
	close(file_open);
	return (write_file);
}

