#include <stdarg.h>
#include <stdio.h>
/**
*print_strings - The function prints strings
*@separator: string to be printed between the string
*@n: number of strings passed to the function
*Return: nothing
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		if (separator == NULL)
			printf("%s", va_arg(args, char));
		else
			printf("%s%s", va_arg(args, char), separator);
	}
	va_end(args);
	printf("\n");
}
