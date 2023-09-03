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
	int i;
	int sum = 0;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			if (!(atoi(argv[i])))
			{
				printf("Error\n");
				return (1);
			}
			else
			{
				sum += atoi(argv[i]);
			}
		}
		printf("%d\n", sum);
		return (0);
	}
}
