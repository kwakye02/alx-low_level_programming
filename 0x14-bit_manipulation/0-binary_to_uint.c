#include "main.h"
/**
*binary_to_uint - converts a binary number to an unsigned int
*@b: pointer to the string of binary characters.
*Return: an unsigned int
*/
unsigned int binary_to_uint(const char *b)
{
	int len = 0, i = 0;
	unsigned int result = 0, x = 0;

	if (b == NULL)
		return (0);
	while (b[i] != '\0')
	{
		len++;
		i++;
	}
	for (i = len - 1; i >= 0; i--)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		if (b[i] == '1')
			result += (1u << x);
		x++;
	}
	return (result);
}

