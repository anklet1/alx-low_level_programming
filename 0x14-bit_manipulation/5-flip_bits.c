#include <stdio.h>
#include "main.h"


/**
 * flip_bits - counts number of bits
 * @n: first number
 * @m: second number
 *
 * Return: Number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
int x;
int count;
count = 0;
x = n ^ m;

while (x)
{
if (x & 1)
count++;
x = count >>  1;
}
return (count);
}
