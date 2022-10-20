#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);

#endif /* MAIN_H */
