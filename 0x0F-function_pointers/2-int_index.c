#include <stddef.h>
#include "function_pointers.h"
/**
*int_index - the function searches for an integer
*@size: size of the array
*@array: array to be used
*@cmp: pointer to the function to be used to compare values
*Return: -1 or the index of the first element
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
			{
				return (i);
			}
		}

	}
	return (-1); 

}
