#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>

typedef struct list list_t;

/**
 * struct list - list
 * @str: string
 * @len: len of string
 * @next: pointer to next element of list
 */

struct list
{
	char *str;
	int len;
	list_t *next;
};

int _putchar(char c);
size_t print_list(const list_t *h);

#endif /* MAIN_H */
