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
	char *str_arg;
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
				printf("%c", char_arg);
				break;
			case 'i':
				int_arg = va_arg(arg, int);
				printf("%d", int_arg);
				break;
			case 'f':
				float_arg = va_arg(arg, double);
				printf("%f", float_arg);
				break;
			case 's':
				str_arg = va_arg(arg, char *);
				if (str_arg == NULL)
					printf("(nil)");
				else
					printf("%s", str_arg);
				break;
		}
		if (format[i + 1] && (format[i] == 'c' || format[i] == 'i' ||
					format[i] == 'f' || format[i] == 's'))
			printf(", ");
		i++;
	}
	va_end(arg);
	printf("\n");
}
