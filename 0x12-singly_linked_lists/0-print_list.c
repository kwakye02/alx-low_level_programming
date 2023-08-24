#include "lists.h"
/**
*print_list - prints all the elements of a list_t list.
*@h: the list to be used
*Return: returns the count of nodes.
*/
size_t print_list(const list_t *h)
{
	const list_t *new_node = h;
	size_t count = 0;

	while (new_node != NULL)
	{
		if (new_node->data == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", new_node->length, new_node->data);
		new_node = new_node->next;
		count++;
	}
	return (count);
}
