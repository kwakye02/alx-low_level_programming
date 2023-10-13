#include "lists.h"
/**
* insert_dnodeint_at_index - inserts a new node at given position
* @h: pointer to the head of the list
* @idx: index of the node
* @n: value to be added to the list
* Return: address of the newnode node, or NULL if it failed
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newnode, *head;
	unsigned int i;

	newnode = NULL;
	if (idx == 0)
		newnode = add_dnodeint(h, n);
	else
	{
		head = *h;
		i = 1;
		if (head != NULL)
			while (head->prev != NULL)
				head = head->prev;
		while (head != NULL)
		{
			if (i == idx)
			{
				if (head->next == NULL)
					newnode = add_dnodeint_end(h, n);
				else
				{
					newnode = malloc(sizeof(dlistint_t));
					if (newnode != NULL)
					{
						newnode->n = n;
						newnode->next = head->next;
						newnode->prev = head;
						head->next->prev = newnode;
						head->next = newnode;
					}
				}
				break;
			}
			head = head->next;
			i++;
		}
	}

	return (newnode);
}