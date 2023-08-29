#include "lists.h"
/**
*free_listint - frees memory occupied by list
*@head: list being used
*Return: void
*/
void free_listint(listint_t *head)
{
	listint_t *temp, *current_node;

	current_node = head;
	while (current_node != NULL)
	{
		temp = current_node->next;
		free(current_node);
		current_node = temp;
	}

}
