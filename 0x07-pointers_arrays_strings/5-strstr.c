#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
* _strstr -  locates a substring
* @haystack: string to search for substring
* @needle: substring
* Return: returns a pointer or NULL
*/
char *_strstr(char *haystack, char *needle)
{
	char *result = NULL;

	while (*haystack != '\0')
	{

		while (*needle != '\0' && *needle == *haystack)
		{
			needle++;
			haystack++;

		}
		if (*needle == '\0')
		{
			result = (char *)haystack;
			break;
		}
		haystack++;
	}
	return (NULL);

}
