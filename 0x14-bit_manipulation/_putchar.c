#include "main.h"
#include <unistd.h>
/**
 * _putchar -  This writes haracter cas output
 * @c: The character to be printed
 *
 * Return: 1 if sucess.
 * On error, Return  -1  and errno  set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

