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
	int i1;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (i1 = 0; i1 < size; i1++)
	{
		if (cmp(array[i1]))
			return (i1);
	}
/*CC*/
	return (-1);
}
