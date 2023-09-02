#include "main.h"

/**
 * _strstr-function that locates a substring
 *
 * @haystack: input string
 * @needle: string to locate
 *
 * Return: pointer to needle location or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int c = 0;

	if (*needle == 0)
	{
		return (haystack);
	}
	while (haystack[c] != '\0')
	{
		i = 0;
		if (haystack[i] == needle[i])
		{
			do {
				if (needle[i + 1] == ('\0'))
				{
					return (haystack);
				}
				i++;
			} while (haystack[i] == needle[i]);
		}
		c++;
	}
	return ('\0');
}

