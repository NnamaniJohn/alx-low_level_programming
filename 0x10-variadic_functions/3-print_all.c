#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

typedef struct ft
{
	char f;
	void (*func)();
} ft_t;

void p_char(va_list a)
{
	printf("%c", va_arg(a, int));
}

void p_int(va_list a)
{
	printf("%d", va_arg(a, int));
}

void p_float(va_list a)
{
	printf("%f", va_arg(a, double));
}

void p_string(va_list a)
{
	char *s = va_arg(a, char *);

	if (!s)
		s = "(nil)";
	printf("%s", s);
}

/**
 * print_all
 * @format: array of format
 * Return: void
 */

void print_all(const char * const format, ...)
{
	va_list str;
	int i = 0, j;
	char *sep = "";
	ft_t arr[] = {
		{'c', p_char},
		{'i', p_int},
		{'f', p_float},
		{'s', p_string}
	};

	va_start(str, format);
	while(format[i])
	{
		j = 0;
		while (j < 4)
		{
			if (format[i] == arr[j].f)
			{
				printf("%s", sep);
				arr[j].func(str);
				sep = ", ";
			}
			j++;
		}
		i++;
	}
	va_end(str);
	printf("\n");
}
