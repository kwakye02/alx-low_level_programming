#include<stdio.h>
/**
* main - runs main code
*Return: returns 0
**/
int main(void)
{
	long long int l;

	printf("Size of a char:%lu byte(s) \n", sizeof(char));
	printf("Size of an int:%lu byte(s) \n", sizeof(int));
	printf("Size of a long int: %lu byte(s) \n", sizeof(long int));
	printf("Size of a long long int:%lu byte(s) \n", sizeof(l));
	printf("Size of a float: %lu byte(s)", sizeof(float));
	return (0);
}
