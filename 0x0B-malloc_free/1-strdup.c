#include<stdio.h>
#include<stdlib.h>
/**
* *_strdup - returns a pointer to a new string
*which is a duplicate of the string str
* @str: string
* Return: NULL or pointer
*/
char *_strdup(char *str)
{
	char *ptr;
	int i, len = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	i = 0;

	while (str[i] != '\0')
	{
		len++;
		i++;
	}
	ptr = malloc((len + 1) * sizeof(char));

	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= len; i++)
	{
	ptr[i] = str[i];
	}
	return (ptr);
}
