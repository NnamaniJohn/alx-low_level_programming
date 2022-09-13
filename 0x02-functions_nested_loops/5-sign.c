#include "main.h"

/**
 * print_sign - function that prints the sign of a number
 * @n: number
 * Return: int
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(n + '0');
		return (1);
	}
	else if (n == 0)
	{
		_putchar(n + '0');
		return (0);
	}
	else
	{
		_putchar(n + '0');
		return (-1);
	}
}
