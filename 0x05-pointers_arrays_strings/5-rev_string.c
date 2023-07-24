 #include "main.h"
/**
*rev_string - reverses a string
*@s: string variable
*/
void rev_string(char *s)
{
	int len = 0;
	int i;

	while (*s != '\0')
	{
		len = len + 1;
		s++;
	}
	s--;

	for (i = 0; i < len ; i++)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
