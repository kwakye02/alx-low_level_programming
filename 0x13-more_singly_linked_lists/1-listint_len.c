#include "lists.h"
/**
*listint_len - returns the length of a list
*@h: list to be used
*Return: length of list
*/
size_t listint_len(const listint_t *h)
{
	const listint_t *temp;
	size_t count = 0;

	temp = h;
	while (temp != NULL)
	{
		count++;
		temp = temp->next;
	}
	return (count);
}
