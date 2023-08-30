#include "main.h"

/**
 * set_string- function to alter string value
 *
 * @s: input string
 * @to: alter string
 *
 * Return: nothing
 */
void set_string(char **s, char *to)
{
	char **ptr;

	ptr = &to;
	*s = *ptr;
}
