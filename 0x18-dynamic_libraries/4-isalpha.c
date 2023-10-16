#include "main.h"
/**
*_isalpha - checks for alphabet
*@c: character to check
*Return:Returns 1 if c is a letter, lowercase or uppercase
*/
int _isalpha(int c)
{
	if (97 <= c && 122 >= c)
		return (1);
	else if (65 <= c && 90 >= c)
		return (1);
	else
		return (0);
}
