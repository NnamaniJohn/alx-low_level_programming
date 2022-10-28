#include "main.h"
#include <stdlib.h>

/**
 * flip_bits - number of bits you would need to flip
 * @n: number
 * @m: number
 * Return: int
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int mask = 0, count = 0;

	mask = n ^ m;
	while (mask)
	{
		if (mask & 1)
			count++;
		mask >>= 1;
	}
	return (count);
}
