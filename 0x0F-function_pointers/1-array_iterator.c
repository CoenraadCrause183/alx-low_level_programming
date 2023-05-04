#include "function_pointers.h"

/**
 * array_iterator - prints elements on new lines
 *
 * @array: the array
 *
 * @size: elements to print
 *
 * @action: prints pointer
 *
 * Return: always 0
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int in;

	if (array == NULL || action == NULL)
		return;
	for (in = 0; in < size; in++)
	{
		action(array[in]);
	}
/* CC */
}
