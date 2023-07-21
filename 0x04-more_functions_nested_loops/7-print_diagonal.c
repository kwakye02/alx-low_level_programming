#include "main.h"
/**
*print_diagonal - prints diagonal lines
*@n: lenght of the line to print
*/
void print_diagonal(int n)
{
	int i, j;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			if (j == i)
				_putchar('\\');
			else
				_putchar(' ');
		}
	}
	_putchar('\n');
}
