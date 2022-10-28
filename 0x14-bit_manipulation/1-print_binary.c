#include "main.h"

/**
 * prt_bin - print binary
 * @pow: power
 * @n: number
 * Return: void
 */

void prt_bin(unsigned long int pow, unsigned long int n)
{
	if (n < 1)
		return;

	_divide(n >> 1);

	if (n & 1)
		_putchar('1');
	else
		_putchar('0');
}

/**
 * print_binary - function that prints the binary representation of a number
 * @n: decimal number to print
 * Return: void
 */

void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		_putchar('0');
		return;
	}

	_divide(n);
}
