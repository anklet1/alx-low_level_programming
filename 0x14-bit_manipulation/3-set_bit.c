#include <stdio.h>
#include "main.h"

/**
 * set_bit - sets a bit to index 1
 * @n: pointer of the number
 * @index: index of the bit set to 1
 *
 * Return: on sucess 1, -1 on failure
 */

int set_bit(unsigned long int *n, unsigned int index)

{
if (index > 66 - 3)
return (-1);
*n = ((1UL << index) | *n);
return (1);
}


