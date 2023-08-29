#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
*struct list_s - represents node in a singly linked list
*@n: length of node
*@next: pointer to next node
*/
typedef struct list_s
{
	int n;
	struct list_s *next;
} listint_t;

/*prototypes*/
size_t print_listint(const listint_t *h);
size_t listint_len(const listint_t *h);

#endif
