#include "function_pointers.h"

/**
 * int_index - return index place if true
 *
 * @array: the array to check
 *
 * @size: size of elements
 *
 * @cmp: compare elements
 *
 * Return: always 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int in;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (in = 0; in < size; in++)
	{
		if (cmp(array[in]))
			return (in);
	}

	return (-1);
}
