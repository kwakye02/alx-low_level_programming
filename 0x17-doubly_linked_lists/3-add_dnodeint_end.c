#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a list
* @head: pointer to head of the list
 * @n: value to be added
 * Return: the address of the newnode
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *h;
	dlistint_t *newnode;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->next = NULL;

	h = *head;
	if (h != NULL)
	{
		while (h->next != NULL)
			h = h->next;
		h->next = newnode;
	}
	else
	{
		*head = newnode;
	}
	newnode->prev = h;
	return (newnode);
}
