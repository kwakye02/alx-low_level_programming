#include <stdio.h>
#include <stdlib.h>
/**
*main - runs main code
*Return: returns a success value
*/

int main(void)
{
	char c;
	char b;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);
	for (b = 'A'; b <= 'Z'; b++)
		putchar(b);
	putchar('\n');

	return (0);
}
