#include "main.h"

/**
 * factorial- function to calculate factorial
 *
 * @n: input number
 *
 * Return: int factorial , -1 if number is negative
 */
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		n = n * (factorial(n - 1));
		return (n);
	}

}
