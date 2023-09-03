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
	(void)argv;

	if (argc == 3)
	{
		printf("%d\n", (atoi(argv[1]) * atoi(argv[2])));
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
