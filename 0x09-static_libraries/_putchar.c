#include "main.h"


/**
 * _puts - prints a given string
 *
 * @str: The given string
 *
 * Return: Void
 * */

void _puts(char *str)
{
	int i;
	for(i = 0; *(str + 1) != '\0'; i++)
	{	char c = *(str +1);

		_putchar(c);
	}
	_putchar('\n');
}
