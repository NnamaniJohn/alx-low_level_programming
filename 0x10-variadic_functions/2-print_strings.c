#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - function that prints strings, followed by a new line
 * @separator: string
 * @n: int
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list str;
	unsigned int i;
	char *s;

	va_start(str, n);
	for (i = 0; i < n; i++)
	{
		s = va_arg(str, char *);
		if (i == n - 1 || !separator)
			if (s)
				printf("%s", s);
			else
				printf("(nil)");
		else
			if (s)
				printf("%s%s", s, separator);
			else
				printf("(nil)%s", separator);
	}
	va_end(str);
	printf("\n");
}
