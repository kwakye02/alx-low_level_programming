#include "main.h"
/**
* *_strncat - concatenates two strings
* @dest: string1
* @src: string 2
* @n number of byte to concatenate
* Return: retuns the pointer dest
*/
char *_strncat(char *dest, char *src, int n)
{
	int x, y;

	for (x = 0; dest[x] != '\0'; x++)
		continue;

	for (y = 0; src[y] != '\0' && n > 0; y++, n--, x++)
	{
		dest[x] = src[y];
	}
	return (dest);
}
