#include "main.h"

/**
 * *array_range - create array
 *
 * @min: min range
 *
 * @max: max range
 *
 * Return: always 0
 */

int *array_range(int min, int max)
{
	int *p1;
	int i1, i2;

	if (min > max)
		return (NULL);

	i2 = max - min + 1;

	p1 = malloc(sizeof(int) * i2);

	if (p1 == NULL)
		return (NULL);

	for (i1 = 0; min <= max; i1++)
		p1[i1] = min++;
/*CC*/
	return (p1);
}
