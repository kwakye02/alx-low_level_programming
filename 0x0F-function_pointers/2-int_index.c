#include <stddef.h>
#include "function_pointers.h"
/**
*int_index - the function searches for an integer and
*returns the index of the first element
*@size: size of the array
*@array: array to be used
*@cmp: pointer to the function to be used to compare values
*Return: -1
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
			{
				return (i);
			}
		}

	}
	return (-1); 

}
