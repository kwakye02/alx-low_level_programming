#ifndef LISTS_H
#define LISTS_H
#include <stdio.h>
#include <stlib.h>
#include <string.h>

/**
*struct my_list - represents node in a singly linked list
*@data: dynamically allocated string to be used
*@length: length of node
*@next: pointer to next node
*/
typedef struct my_list
{
	char *data;
	unsigned int length;
	struct my_list *next;
}list_t;
#endif
