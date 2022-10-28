#include "main.h"
#include <stdlib.h>

/**
 * get_bit - function that returns the value of a bit at a given index
 * @n: number
 * @index: index
 * Return: int
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int base = 2;
	unsigned int pow = 1, i;
	int ret;
	int *bin;

	while (base <= n)
	{
		base *= 2;
		pow++;
	}
	if (index > pow - 1)
		return (-1);
	bin = malloc(sizeof(int) * pow);
	if (bin == NULL)
	{
		free(bin);
		return (-1);
	}
	for (i = 0; i < pow; i++)
	{
		bin[i] = n % 2;
		n = n / 2;
	}
	ret = bin[index];
	free(bin);
	return (ret);
}
