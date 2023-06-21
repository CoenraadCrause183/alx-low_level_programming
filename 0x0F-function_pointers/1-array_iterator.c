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
	unsigned int i1;

	if (array == NULL || action == NULL)
		return;
	for (i1 = 0; i1 < size; i1++)
	{
		action(array[i1]);
	}
/*CC*/
}
