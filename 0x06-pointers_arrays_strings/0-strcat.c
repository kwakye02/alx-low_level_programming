#include "main.h"
/**
* *_strcat - concatenates two strings
* @dest: string to concatenate
* @src: string to concatenate
* Return: returns a string pointer
*/
char *_strcat(char *dest, char *src)
{
	int i = 0, len = 0;

	while (dest[i] != '\0')
	{
		len++;
		i++;
	}
	i = 0;
	while (src[i] != '\0')
	{
		dest[len + i] = src[i];
		i++;
	}
	return (dest);
}
