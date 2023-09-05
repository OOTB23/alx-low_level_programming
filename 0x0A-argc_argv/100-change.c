#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main- entery point
 *
 * @argc: input argument number
 * @argv: argument value
 *
 * Return: nothing
 */
int main(int argc, char **argv)
{

	int _change(int x);

	(void)argc;

	if (argc != 2)
	{
		printf("Erro\n");
		return (1);
	}
	else if (atoi(argv[1]) < 0)
	{
		printf("0\n");
		return (0);
	}
	else
	{
		int x = atoi(argv[1]);
		int change = 0;

		change = _change(x);
		printf("%d\n", change);
		return (0);
	}
}

/**
 * _change- fuction to calculate currencey exchange
 *
 * @x: input argument number
 *
 * Return: int change number
 */

int _change(int x)
{
	int change = 0;
	int c = 0;

	if (x >= 25)
	{
		c = 25;
	}
	else if (x >= 10)
	{
		c = 10;
	}
	else if (x >= 5)
	{
		c = 5;
	}
	else if (x >= 2)
	{
		c = 2;
	}
	else if  (x >= 0 || x <= 1)
	{
		return (change + x);
	}
	change = (x / c) + _change(x % c);
	return (change);
}
