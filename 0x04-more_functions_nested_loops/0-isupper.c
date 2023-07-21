#include "main.h"
/**
*_isupper - checks for upper case letters
*@c: charaacter to check
*Return: returns 0 or 1
*/
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
