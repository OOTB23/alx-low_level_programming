#include "main.h"

/**
 * _strchr- function to fetch character from a string
 *
 * @s: input string
 * @c: character to look for
 *
 * Return: pointer to character
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{

		if (s[i] == c)
		{
			return (s +  i);
		}
	}
	return ('\0');
}
