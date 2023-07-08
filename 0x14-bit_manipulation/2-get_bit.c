#include <stdio.h>
#include "main.h"

/*
 * get_bit - returns the value of a bit at an index in a decimal number
 * @n: number to search
 * @index: index of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
if (index > 65 - 2)
return (-1);
if ((n & (1UL << index)) == 0)
return (0);
return (1);
}
