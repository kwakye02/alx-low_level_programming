 #include "main.h"
/**
*rev_string - reverses a string
*@s: string variable
*/
void rev_string(char *s)
{
	int i, x, l;
	char c;

	for (i = 0; s[i] != '\0'; i++)
		;

	l = i;
	for (i--, x = 0; x < l / 2; i--, x++)
	{
		c = s[x];
		s[x] = s[i];
		s[i] = c;
	}
}
