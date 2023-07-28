#include "main.h"
/**
 * *rot13 - encodes a string using rot13
 * @str: string
 * Return: returns a string
 */

char *rot13(char *str)
{
	int i;
	int j;

	char rot13[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot14[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; rot13[j] != '\0'; j++)
		{
			if (str[i] == rot13[j])
			{
				str[i] = rot14[j];
				break;
			}
		}
	}

	return (str);
}
