#include <stddef.h>
#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
*array_iterator - executes a function given as a parameter
*on each element of an array
*@size: size of the array
*@array: array to be used
*@action:  pointer to the function to be use
*Return: void
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	for (i = 0; i < size; i++)
		(*action)(array[i]);
}
