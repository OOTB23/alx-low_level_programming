#include "main.h"

/**
 * print_alphabet - writes the alphabet
 *
 * Return: nothing.
 *
 */
void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}
