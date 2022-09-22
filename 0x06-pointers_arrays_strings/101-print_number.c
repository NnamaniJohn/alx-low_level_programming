#include "main.h"

/**
 * print_number - function that prints an integer
 * @n: int
 * Return: void
 */

void print_number(int n)
{
	int i = 1;

	if (n < 0)
	{
		_putchar('-');
		n = n * -1;
	}

	while (i <= 1000000000 && (n / i) >= 10)
		i = i * 10;
	while (i >= 1)
	{
		_putchar('0' + ((n / i) % 10));
		n = n % i;
		i = i / 10;
	}
}
