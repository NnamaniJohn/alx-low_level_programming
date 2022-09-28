#include "main.h"

/**
 * checker - check prime number
 * @n: int
 * @base: int
 * Return: int
 */

int checker(int n, int base)
{
	if (n * n > base)
		return (1);
	else if (base % n == 0)
		return (0);
	else
		return (checker(n + 1, base));
}

/**
 * is_prime_number - check prime number
 * @n: int
 * Return: int
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else
		return (checker(2, n));
}
