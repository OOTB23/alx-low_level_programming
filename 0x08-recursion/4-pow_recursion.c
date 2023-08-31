#include "main.h"

/**
 * _pow_recursion- function to calculate power
 *
 * @x: input number
 * @y: to power
 *
 *
 * Return: int power , -1 if number is negative
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else if (y == 1)
	{
		return (x);
	}
	else
	{
		x = x * _pow_recursion(x, y - 1);
		return (x);
	}

}
