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
	va_list str;
	unsigned int i;

	va_start(str, n);
	for (i = 0; i < n; i++)
	{
		if (i == n - 1 || !separator)
			if (va_arg(str, char *))
				printf("%s", va_arg(str, char *));
			else
				printf("(nil)");
		else
			if (va_arg(str, char *))
				printf("%s%s", va_arg(str, char *),
					separator);
			else
				printf("(nil)%s", separator);
	}
	va_end(num);
	printf("\n");
}
