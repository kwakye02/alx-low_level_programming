#include "main.h"
/**
*more_numbers -  prints 10 times the numbers, from 0 to 14
*Return: returns 0
*/
void more_numbers(void)
{
	int i, x, c;

	for (x = 0; x <= 9; x++)
	{
		for (c = 0; c <= 14; c++)
		{
			i = c;
			if (c > 9)
			{
				_putchar(1 + 48);
				i = c % 10;
			}
			_putchar(i + 48);
		}
		_putchar('\n');
	}
}
