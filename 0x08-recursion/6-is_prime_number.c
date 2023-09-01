#include "main.h"
int _prime_guess(int n, int x);
/**
 * _is_prime_number- function to define prime  int
 *
 * @n: input int number
 *
 * Return: 1 if number is prime , 0 if not
 */
int is_prime_number(int n)
{
	return (_prime_guess(n, 2));

}
/**
 * _prime_guess- function to guess prime
 *
 * @n: int to guess if prime
 * @x: guess division
 *
 * Return: int square valeu
 */

int _prime_guess(int n, int x)
{
	if (x >= n && n > 1)
	{
		return (1);
	}
	else if (n % x == 0 || n <=1)
	{
		return (0);
	}
	else
	{
		return (_prime_guess(n, x+1));
	}
}
