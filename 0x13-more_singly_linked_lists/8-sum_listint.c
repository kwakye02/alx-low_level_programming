#include "lists.h"
/**
*sum_listint - returns the sum of all data(n) of the list
*@head: list to be used
*Return: 0 or sum
*/
int sum_listint(listint_t *head)
{
	listint_t *temp;
	int sum = 0;

	if (head == NULL)
		return (0);
	temp = head;
	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
