#include "lists.h"
/**
*get_nodeint_at_index - returns the nth node of a list
*@head: list to be used
*@index: indexed to be accessed
*Return: NULL or value of nth node
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	unsigned int i;

	if (head == NULL)
		return (NULL);
	temp = head;
	for (i = 0; i < index; i++)
	{
		if (temp == NULL)
		{
			return (NULL);
		}
		temp = temp->next;
	}
	return (temp);
}
