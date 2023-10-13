#include "lists.h"
/**
* sum_dlistint - returns the sum of all the data (n) of the linked list
* @head: pointer to the head of the list
* Return: sum of the data in the list
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;
		while (head != NULL)
		{
			sum += head->n;
			head = head->next;
		}
	}
	return (sum);
}
