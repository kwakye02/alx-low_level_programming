#include<stdio.h>
#include<time.h>
/**
*main - runs main code
*Return: returns 0
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RANDM_MAX / 2;

	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is negative\n", n);

	return (0);
}
