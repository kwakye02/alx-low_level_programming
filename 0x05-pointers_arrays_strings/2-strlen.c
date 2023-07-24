#include "main.h"
/**
*_strlen - returns the lenght of a string
*@s: string to check length
*Return: returns the length
*/
int _strlen(char *s)
{
	char c[] = *s;

	int i = 0, len = 0;

	while (c[i] != '\0')
	{
		len = len + 1;
		i++
	}
	return (len);
}
