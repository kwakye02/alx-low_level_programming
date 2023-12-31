#include "main.h"
/**
*get_bit - return the value of a bit at a given index
*@n: the integer value
*@index: index to be used
*Return: a valule or -1
*/
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask = 0;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	mask = 1UL << index;
	if (n & mask)
		return (1);
	else
		return (0);
}
