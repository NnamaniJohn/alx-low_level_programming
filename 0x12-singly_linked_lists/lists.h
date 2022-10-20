#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>

typedef struct list list_t;

struct list {
	char *str;
	int len;
	list_t *next;
};

int _putchar(char c);
size_t print_list(const list_t *h);

#endif /* MAIN_H */
