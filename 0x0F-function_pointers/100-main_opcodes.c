#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints opcodes
 * @argv: argument vector
 * @argc: argument count
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i, num;
	char *ptr;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	num = atoi(argv[1]);

	if (num < 0)
	{
		printf("Error\n");
		return (2);
	}

	ptr = (char *)main;

	for (i = 0; i < num; i++)
	{
		if (i == num - 1)
		{
			printf("%02hhx\n", ptr[i]);
			break;
		}
		printf("%02hhx ", ptr[i]);
	}
	return (0);
}
