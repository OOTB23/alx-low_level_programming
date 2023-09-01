#include "main.h"
int _sqrt_guess(int n, int x);
/**
 * _sqrt_recursion- function to calculate square of int
 *_sqrt_guess- function to guess square of nymber
 *
 * @n: input int number
 *
 * Return: int square value
 */
int _sqrt_recursion(int n)
{
	return (_sqrt_guess(n, 1));

}
/**
 * _sqrt_guess- function to guess square
 *
 * @n: int to guess its square
 * @x: guess square valeu
 *
 * Return: int square valeu
 */

int _sqrt_guess(int n, int x)
{
	if (x * x == n)
	{
		return (x);
	}
	else if (x * x < n)
	{
		return (_sqrt_guess(n, x + 1));
	}
	else
	{
		return (-1);
	}
}
