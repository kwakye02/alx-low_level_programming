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
	char *substring = NULL;
	const char *n = needle;
	const char *h = haystack;

	while (*haystack != '\0')
	{

		while (*n != '\0' && *n == *h)
		{
			n++;
			h++;

		}
		if (*needle == '\0')
		{
			substring = (char *)haystack;
			break;
		}
		haystack++;
	}
	return (substring);

}
