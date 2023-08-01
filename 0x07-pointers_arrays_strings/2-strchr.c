#include "main.h"
/**
* *_strchr -  function that locates a character in a string
* @s: string
* @c: character located by function
* Return: returns pointer
*/
char *_strchr(char *s, char c)
{
	int i, n = 0;

	while (s[i] != '\0')
		n++;

	for (i = 0; i <= n; i++)
	{
		if (s[i] == c)
		{
			break;
		}
		else if (s[i] == '\0')
		{
			return (NULL);
		}
	}
}
