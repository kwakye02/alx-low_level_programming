#include "lists.h"
/**
 * add_dnodeint - adds  new node at the beginning of list
 * @head: pointer to head of the list
 * @n: value to be added to list
 * Return:  address of new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode;
	dlistint_t *h;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->prev = NULL;
	h = *head;

	if (h != NULL)
	{
		while (h->prev != NULL)
			h = h->prev;
	}

	newnode->next = h;

	if (h != NULL)
		h->prev = newnode;

	*head = newnode;

	return (newnode);
}
