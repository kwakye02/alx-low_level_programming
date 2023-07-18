#include "main.h"
/**
*_islower - checks for lowercase
*@c: character
*Return: 1 if c is lowercase and 0 otherwise
*/
int _islower(int c)
{
	if (96 < c < 123)
		return (1);
	else
		return (0);
}
