#include "main.h"
/**
* *_strcat - concatenates two strings
* @dest: string to concatenate
* @src: string to concatenate
* Return: returns a string pointer
*/
char *_strcat(char *dest, char *src)
char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
		;
	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}

	dest[i] = '\0';
	return (dest);
}
