#include "main.h"
#include <stdio.h>
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

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
