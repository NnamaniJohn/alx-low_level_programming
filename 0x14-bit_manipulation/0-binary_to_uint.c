#include "main.h"

/**
 * power - power function
 * @base: base
 * @exp: exp
 * Return: int
 */

int power(int base, int exp)
{
	int result = 1;

	while (exp != 0)
	{
		result *= base;
		--exp;
	}
	return (result);
}

/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 * @b: binary
 * Return: base 10
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i, len = 0, dec = 0, bin;

	if (!b)
		return (0);
	while (b[len])
		len++;
	for (i = 0; i < len; i++)
	{
		bin = b[i] - '0';
		if (bin == 0 || bin == 1)
			dec += power(2, (len - i - 1)) * bin;
		else
			return (0);
	}
	return (dec);
}
