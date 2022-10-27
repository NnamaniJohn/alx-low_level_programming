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


void prt_bin(int pow, unsigned long int n)
{
	int b;

	if (n >= (unsigned long int) power(2, pow))
		b = 1;
	else
		b = 0;
	_putchar(b + '0');
	n = n - (b * power(2, pow));
	if (pow - 1 >= 0)
		prt_bin(pow - 1, n);
}

/**
 * print_binary - function that prints the binary representation of a number
 * @n: decimal number to print
 * Return: void
 */

void print_binary(unsigned long int n)
{
	unsigned long int base = 2;
	int pow = 1;

	if (n < 2)
		_putchar(n + '0');
	else
	{
		while (base < n)
		{
			pow++;
			base *= 2;
		}
		prt_bin(pow - 1, n);
	}

}
