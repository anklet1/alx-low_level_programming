#include <stdio.h>
#include "main.h"

/**
* read_textfile - Reads a text file and prints it to the POSIX standard output.
* @filename:A Pointer to file to be read.
* @letters: The number of characters to be read.
* Return: number of letters printed or 0 if failed
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t df, file_read, file_write;
	char *buf = malloc(letters * sizeof(char));

	if (buf == NULL)
		return (0);

	df = open(filename, O_RDONLY);
	if (df < 0 || filename == NULL)
		return (0);

	file_read = fread(df, buf, letters);
	if (file_read < 0)
		return (0);
	buf[file_read] = '\0';
	close(df);

	file_write = write(STDOUT_FILENO, buf, file_read);
	if (file_write < 1)
		return (0);
	free(buf);

	return (file_write);
}
