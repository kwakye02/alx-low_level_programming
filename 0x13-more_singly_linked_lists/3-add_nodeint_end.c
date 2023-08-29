#include "lists.h"
/**
*add_nodeint_end - adds a node to the end of the list
*@n: value to be added
*@head: pointer to the list
*Return: a pointer or null
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
		listint_t *newnode, *temp;

	newnode = (listint_t *)malloc(sizeof(listint_t));
	if (newnode == NULL)
	{
		return (NULL);
	}
	newnode->n = n;
	newnode->next = NULL;
	if (*head == NULL)
	{
		temp = *head = newnode;

	}
	else
	{
		temp = *head;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = newnode;
	}
	return (*head);
}
