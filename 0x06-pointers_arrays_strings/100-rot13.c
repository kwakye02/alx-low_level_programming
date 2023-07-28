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

	char rot1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; rot1[j] != '\0'; j++)
		{
			if (str[i] == rot1[j])
			{
				str[i] = rot2[b];
				break;
			}
		}
	}

	return (str);
}
