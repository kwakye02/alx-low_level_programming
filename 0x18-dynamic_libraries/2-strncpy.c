#include "main.h"
/**
* *_strncpy - copies a string
* @dest: string1
* @src: string 2
* @n: number of byte to concatenate
* Return: retuns the pointer dest
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	for (; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
