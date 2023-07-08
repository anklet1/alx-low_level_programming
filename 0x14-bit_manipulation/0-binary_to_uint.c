#include <stdio.h>
#include "main.h"

/*
 * main- Entry point
 * binary_to_uint - Convert binary number to unsigned int
 * @b: String that contain binary number
 *
 * Return: Returns the converted number
 */
int main(void)
{ 	unsigned int binary_to_uint(const char *b);
	unsigned int x;
	int len, base_two;

	if (!b){
		return (0);
		}
	x = 0;

	for (len = 0; b[len] != '\0'; len++)
		;
	{

	for (len--, base_two = 1; len >= 0; len--, base_two *= 2)
		;
	{
	if (b[len] != '0' && b[len] != '1')
	
	return (0);
	}
	if (b[len] & 1)
	
		x += base_two;
	}

	return (x);
}
