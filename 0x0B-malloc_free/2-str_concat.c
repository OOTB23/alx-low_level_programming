#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat- function to concatenate two  string.
 * @s1: first input string
 * @s2: second input string
 * Return: array pointer
 *
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int i1;
	unsigned int i2;
	unsigned int c, c1, c2 = 0;
	char *p;

	for (i1 = 0; s1[i1] != '\0'; i1++)
	{
	}

	for (i2 = 0; s2[i2] != '\0'; i2++)
	{
	}

	p = malloc((i1 * sizeof(*s1) + 1) + (i2 * sizeof(*s2) + 1));

	if (p == NULL)
	{
		return (0);
	}

	for (; c1 <= i1; c1++)
	{
		p[c] = s1[c1];
		c++;
	}
	for (; c2 <= i2; c2++)
	{
		p[c] = s2[c2];
		c++;
	}
	return (p);
}
