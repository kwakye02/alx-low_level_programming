#include<stdio.h>
#include<stdlib.h>
/**
* *create_array - creates an array of chars
* and initializes it with a specific char
* @c: specific character
* @size: size of arrayi
* Return: NULL or a pointer
*/
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	ptr = malloc(size * sizeof(char));

	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}
	return (ptr);
}
