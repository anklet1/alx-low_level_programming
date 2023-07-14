#include <stdio.h>
#include <sys/stat.h>
#include "main.h"

/**
 * create_file - creates file
 * @filename: Pointer to name of the file
 * @text_content: Pointer to the string to write to the file
 *
 * Return: returns --1 if function fails
 * otherwise return -1
 */

int create_file(const char *filename, char *text_content)
{
	int i, return_file, len = 0;

	if (filename == NULL)
		return (-1);

	FILE *return_file = fopen(filename, 'w');

	_putchar(file, "%s", text_content);


	if (return_file == -1 || i == -1)
		return (-1);

	fclose(return_file);

	return (1);
}

