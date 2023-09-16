#include "function_pointers.h"
/**
 * array_iterator- excute fucntion array
 *
 * @array: input int array
 * @action: print function pointer
 * @size: array size
 *
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *last_element = array + size - 1;

	if (array && size && action)
	{
		while (array <= last_element)
		{
			action(*array++);
		}
	}
}
