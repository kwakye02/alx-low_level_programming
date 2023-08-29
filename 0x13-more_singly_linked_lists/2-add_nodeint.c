#include "lists.h"
/**
*add_nodeint - adds a new node to the list
*@head: pointer to the list being used
*@n: the valued being added to the list
*Return: NULL or a pointer to the list
*/
listint_t *add_nodeint(listint_t **head, const int n)
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
		  *head = newnode;
		  newnode->next = temp;
	}
	return (*head);


}
