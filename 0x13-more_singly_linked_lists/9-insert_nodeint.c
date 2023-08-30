#include "lists.h"
/**
*insert_nodeint_at_index - the function inserts
*a new node at a given position
*@head: pointer to the list
*@idx: indexed to be used
*@n: value to be inserted at idx
*Return: returns NULL or a list
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
		listint_t *temp, *newnode;
		unsigned int i;

	newnode = (listint_t *)malloc(sizeof(listint_t));
	if (newnode == NULL)
	{
		return (NULL);
	}
	newnode->n = n;
	newnode->next = NULL;
	if (*head == NULL)
	{
		*head = newnode;
	}
	else
	{
		temp = *head;
		if (idx == 0)
		{
			newnode->next = *head;
			*head = newnode;
			return (*head);
		}
		for (i = 0; i < idx - 1; i++)
		{
			if (temp == NULL)
			{
				free(newnode);
				return (NULL);
			}
			temp = temp->next;
		}
		newnode->next = temp->next;
		temp->next = newnode;
	}
	return (newnode);
}
