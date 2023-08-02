#include "main.h"
/**
*_sqrt_recursion - function that returns the natural square root of a number.
*@n: nummber
*Return: returns square root of n
*/
int _sqrt_recursion(int n)
{
	static int num = 0, sqrt;

	if (n < 0)
	{
		return (-1);
	}
	else if (num * num > n)
	{
		num = 0;
		return (-1);
	}
	else if (num * num == n)
	{
		sqrt = num;
		num = 0;
		return (sqrt);
	}
	num++;
	return (_sqrt_recursion(n));
}
