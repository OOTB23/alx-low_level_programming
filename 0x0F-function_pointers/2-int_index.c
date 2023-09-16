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
	int element;

	if (array && size && cmp)
	{
		while (element < size)
		{
			if (cmp(array[element] != 0)
			{
				return (element);
			}
			element++;
		}
	}
	return (-1);
}
