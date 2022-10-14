#ifndef MAIN_H
#define MAIN_H

/**
 * struct ft - struct
 * @f: format
 * @func: function
 * Description: contains the type and the format to print.
 */
typedef struct ft
{
	char f;
	void (*func)();
} ft_t;

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif /* MAIN_H */
