#include "main.h"
/**
*_isdigit - check if a character is digit
*@c: character to check
*Return: returns 0 or 1
*/
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
