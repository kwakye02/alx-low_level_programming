#include "main.h"
/**
*print_rev - print string in reverse order
*@s: string variable
*/
void print_rev(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len = len + 1;
		s++;
	}
/*	s = s + (len-1); */
	int i;

	for (i = 0; i < len ; i++)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
