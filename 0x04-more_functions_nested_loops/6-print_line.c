#include "main.h"
/**
*print_line - draws a straight line
*@n: lenght of line to print
*Return: always 0
*/
void print_line(int n)
{
	int x;

	while (n > 0)
	{
		_putchar(95);
		n--;
	}
	_putchar('\n');
}
