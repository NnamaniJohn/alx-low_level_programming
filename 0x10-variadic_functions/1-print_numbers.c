#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - function that prints numbers, followed by a new line
 * @separator: string
 * @n: int
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list num;
	unsigned int i;

	va_start(num, n);
	for (i = 0; i < n; i++)
	{
		if (i == n - 1 || !separator)
			printf("%d", va_arg(num, int));
		else
			printf("%d%s", va_arg(num, int), separator);
	}
	va_end(num);
	printf("\n");
}
