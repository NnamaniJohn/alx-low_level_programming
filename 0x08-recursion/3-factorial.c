#include "main.h"

/**
 * factorial - get factorial of a number
 * @n: number
 * Return: int
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
