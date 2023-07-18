#include "main.h"
/**
*print_sign - prints the sign of a number
*@n: number to check
*Return: returns 1 or 0
*/
int print_sign(int n)
{
	if (n > 48)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 48)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}

}
