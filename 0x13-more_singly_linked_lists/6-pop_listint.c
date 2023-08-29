#include "lists.h"
/**
*pop_listint - deletes the head node of a list
*@head: list being used
*Return: the value of head node.
*/
int pop_listint(listint_t **head)
{
	listint_t *temp, *current_node;
	int data;

	if (*head == NULL)
		return (0);
	current_node = *head;
	temp = current_node->next;
	data = current_node->n;
	free(current_node);
	*head = temp;
	return (data);
}
