#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all
 * @format: array of format
 * Return: void
 */

void print_all(const char * const format, ...)
{
	va_list str;
	int i = 0;
	char *s;

	va_start(str, format);
	while(format[i])
	{
		switch (format[i]) 
		{
			case 'c':
				printf("%c", va_arg(str, int));
				if (format[i + 1])
					printf(", ");
				break;
			case 'i':
				printf("%d", va_arg(str, int));
				if (format[i + 1])
					printf(", ");
				break;
			case 'f':
				printf("%f", va_arg(str, double));
				if (format[i + 1])
					printf(", ");
				break;
			case 's':
				s = va_arg(str, char *);
				if (s)
					printf("%s", va_arg(str, char *));
				else
					printf("(nil)");
				if (format[i + 1])
					printf(", ");
				break;
		}
		i++;
	}
	va_end(str);
	printf("\n");
}
