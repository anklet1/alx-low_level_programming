#include <stdio.h>
#include "main.h"

/**
 * clear_bit - set value to 0
 * @n: pointer
 * @index: index of bit to clear
 *
 * Return: On sucess 1, -1 on failure
 */
int clear_bit(unsigned long int *n, unsigned int index)

{
if (index > 66 - 3)
return (-1);
*n & =(~(1UL << index));
return (1);
}

