#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes the character C to atdiout
 * @c The character to print
 *
 * Return: On success1
 * On error -1 returnedand errno is set appropriately
 * */
int _putchar(char c)
{
    return (write(1,&c,1));
}
