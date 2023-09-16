#include "function_pointers.h"
/**
 * print_name- print name fucntion
 *
 * @name: input string nane
 * @f: print function pointer
 *
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	{
		f(name);
	}
}
