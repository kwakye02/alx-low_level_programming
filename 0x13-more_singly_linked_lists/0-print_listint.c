#include "lists.h"
/**
*print_listint - prints all elements of a list
*@h: list being used
*Return: the number of nodes
*/
size_t print_listint(const listint_t *h)
{
	const listint_t *temp;
	size_t i = 0;

	temp = h;
	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		i++;
	}
	return (i);
}
