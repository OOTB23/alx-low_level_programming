#include "main.h"

/**
 * _strcmp- comparetwo strings
 *
 * @s1: first string
 *
 * @s2: second  String
 *
 * Return: int of 1st char difference
 */
int _strcmp(char *s1, char *s2)
{
	int c;

	while (*s1 == *s2 && *s1 != '\0')
	{
		s1++;
		s2++;
	}
	c = *s1 - *s2;

	return (c);
}
