#include "main.h"
/**
*print_numbers -  prints numbers from 0 to 9
*Return: returns 0
*/
void print_numbers(void)
{
	int c;

	do {
		_putchar(c + 48);
		c++;
	} while (c >= 0 && c <= 9);
	_putchar('\n');

	return (0);
}
