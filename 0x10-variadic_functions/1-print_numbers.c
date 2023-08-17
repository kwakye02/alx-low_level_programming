#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
/**
*print_numbers - prints numbers
*@separator: takes the new line character
*@n: number of args to be passed
*Return: nothing
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	va_end(args);
	printf("\n");
}
