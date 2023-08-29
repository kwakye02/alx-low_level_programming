#include "lists.h"
/**
*delete_nodeint_at_index - deletes nodes at given index
*@head: pointer to the list
*@index: indext of node to be deleted
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *current_node;
	unsigned int i;

	if (*head == NULL)
		return (-1);
	current_node = *head;
	if (index == 0)
	{
		*head = current_node->next;
		free(current_node);
		return (1);
	}
	for (i = 0; i < index - 1; i++)
	{
		if (current_node == NULL || current_node->next == NULL)
		{
			return (-1);
		}
		current_node = current_node->next;
	}
	temp = current_node->next;
	if (temp == NULL)
		return (-1);

	current_node->next = temp->next;
	free(temp);
	return (1);
}
