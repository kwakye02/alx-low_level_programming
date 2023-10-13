#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
* main - generate a key depending on a username for crackme5
* @argc: the number of arguments
* @argv: arguments passed to the function
* Return: 0 or 1
 */
int main(int argc, char *argv[])
{
	unsigned int x, i;
	size_t len, sum;
	char *l = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";
	char p[7] = "      ";

	if (argc != 2)
	{
		printf("Correct usage: ./keygen5 username\n");
		return (1);
	}
	len = strlen(argv[1]);
	p[0] = l[(len ^ 59) & 63];
	for (i = 0, sum = 0; i < len; i++)
		sum += argv[1][i];
	p[1] = l[(sum ^ 79) & 63];
	for (i = 0, x = 1; i < len; i++)
		x *= argv[1][i];
	p[2] = l[(x ^ 85) & 63];
	for (x = argv[1][0], i = 0; i < len; i++)
		if ((char)x <= argv[1][i])
			x = argv[1][i];
	srand(x ^ 14);
	p[3] = l[rand() & 63];
	for (x = 0, i = 0; i < len; i++)
		x += argv[1][i] * argv[1][i];
	p[4] = l[(x ^ 239) & 63];
	for (x = 0, i = 0; (char)i < argv[1][0]; i++)
		x = rand();
	p[5] = l[(x ^ 229) & 63];
	printf("%s\n", p);
	return (0);
}
