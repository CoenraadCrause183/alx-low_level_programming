#include "main.h"

/**
 * swap_int - main function
 *
 * @a: integer
 *
 * @b: integer
 *
 * Return: always 0
 */

void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}
