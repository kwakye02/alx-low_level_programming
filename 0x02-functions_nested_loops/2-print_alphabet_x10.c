#include "main.h"
/**
*print_alphabet_x10 - prints lowercase alphabets 10x
*Return: always 0 (success)
*/
void print_alphabet_x10(void)
{
	int a;

	for (a = 0; a <= 9; a++)
	{
		char c;

		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
