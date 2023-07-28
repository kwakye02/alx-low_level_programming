#include "main.h"
/**
* *string_toupper -  changes all lowercase letters of a string to uppercase.
* @str: string
*Return: string
*/
char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] > 96 && str[i] < 123)
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}
