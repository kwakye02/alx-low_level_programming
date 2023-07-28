#include "main.h"
/**
* *cap_string - capitalizes all words of a string.
*@str: string
*Return: string str
*/
char *cap_string(char *str)
{
	int x = 0, y;
	char a[] = " \t\n,;.!?\"(){}";

	while (*(str + x))
	{
		if (*(str + x) >= 'a' && *(str + x) <= 'z')
		{
			if (x == 0)
				*(str + x) -= 32;
			else
			{
				for (y = 0; y <= 12; y++)
				{
					if (a[y] == *(str + x - 1))
						*(str + x) -= 32;
				}
			}
		}
		x++;
	}
	return (str);
}
