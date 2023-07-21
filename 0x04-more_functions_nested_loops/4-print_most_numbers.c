#include "main.h"
/**
*print_most_numbers - prints between 0 and 9
*Excludes 2 and 4
*Return: returns 0
*/
void print_most_numbers(void)
{
	int c;

	for (c = 48; c <= 57; c++)
	{
		if (c == 52 || c == 50)
			continue;
		else
			_putchar(c);
	}
	_putchar('\n');
}
