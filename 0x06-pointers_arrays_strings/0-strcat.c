#include "main.h"
/**
* *_strcat - concatenates two strings
* @dest: string to concatenate
* @src: string to concatenate
* Return: returns a string pointer
*/
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int len = 0;

	while (dest[i] != '\0')
	{
		len++;
	}

	while (src[i] != '\0')
	{
		dest[len + i] = src[i];
		i++;
	}

	dest[len + i] = '\0';

	return (dest);
}
