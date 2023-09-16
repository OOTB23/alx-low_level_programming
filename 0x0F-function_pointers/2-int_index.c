#include "function_pointers.h"
/**
 * int_index- int search fucntion
 *
 * @array: input aray
 * @size: array size
 * @cmp: compare function pointer
 *
 * Return: index of first element , -1 if no elment or empty array
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int *last_element = array + size - 1;

	if (array && size && cmp)
	{
		while (array <= last_element)
		{
			if (cmp(*array++) != 0)
			{
				return (*array);
			}
		}
		return (-1);
	}
	else
	{
		return (-1);
	}
}
