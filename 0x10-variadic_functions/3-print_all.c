#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
/**
*print_all - prints anything
*@format: list of types of arguments passed to the function
*Return: nothing
*/
void print_all(const char * const format, ...)
{
	char *str_arg, *sep = "";
	float float_arg;
	char char_arg;
	va_list arg;
	int int_arg, i;

	va_start(arg, format);
	i = 0;
	while (format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				char_arg = va_arg(arg, int);
				printf("%s%c", sep, char_arg);
				break;
			case 'i':
				int_arg = va_arg(arg, int);
				printf("%s%d", sep, int_arg);
				break;
			case 'f':
				float_arg = va_arg(arg, double);
				printf("%s%f", sep, float_arg);
				break;
			case 's':
				str_arg = va_arg(arg, char *);
				if (str_arg == NULL)
					printf("(nil)");
				else
					printf("%s%s", sep, str_arg);
				break;
		}
		sep = ", ";
		i++;
	}
	printf("\n");
	va_end(arg);
}
