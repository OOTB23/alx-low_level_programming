#include "main.h"

/**
 * _strpbrk- function to fetch substring for any match
 *
 * @s: input string
 * @accept: substring to match with
 *
 * Return: number of bytes
 */
char *_strpbrk(char *s, char *accept)
{
	int c;
	int i = 0;
	char *ptr;

	while (s[i] != '\0')
	{
		c = 0;
		for (; accept[c] != '\0'; c++)
		{
			if (accept[c] == s[i])
			{
				ptr = &s[i];
				return (ptr);
			}
		}
		i++;
	}
	return (0);
}
