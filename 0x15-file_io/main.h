#ifndef _FILE_IO_
#define _FILE_IO_

#include <sys/uio.h>
#include <unistd.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <sys/types.h>


ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
int _strlen(char *s);
void copy_file(const char *src, const char *dest);

#endif
