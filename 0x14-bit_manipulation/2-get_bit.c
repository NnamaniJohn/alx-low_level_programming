#include "main.h"

/**
 * get_bit - function that returns the value of a bit at a given index
 * @n: number
 * @index: index
 * Return: int
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i = 0;

	while (n)
	{
		if (index == i)
			return (n % 2);
		n = n / 2;
		i++;
	}
	if (index > i && index < 63)
		return (0);
	return (-1);
}
