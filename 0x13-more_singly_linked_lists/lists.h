#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct listint listint_t;

/**
 * struct listint - list
 * @n: int
 * @next: pointer to next element of list
 */

struct listint
{
	int n;
	listint_t *next;
};

/*int _putchar(char c);*/
size_t print_listint(const listint_t *h);
size_t listint_len(const listint_t *h);
listint_t *add_nodeint(listint_t **head, const int n);
listint_t *add_nodeint_end(listint_t **head, const int n);
void free_listint(listint_t *head);
void free_listint2(listint_t **head);
int pop_listint(listint_t **head);
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);

#endif /* MAIN_H */
