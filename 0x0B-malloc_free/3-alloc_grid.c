#include "main.h"

/**
 * alloc_grid - nested loop
 *
 * @width: width
 *
 * @height: height
 *
 * Return: always 0
 */

int **alloc_grid(int width, int height)
{
	int **i1;
	int ix, iy;

	if (width <= 0 || height <= 0)
		return (NULL);

	i1 = malloc(sizeof(int *) * height);

	if (i1 == NULL)
		return (NULL);

	for (ix = 0; ix < height; ix++)
	{
		i1[ix] = malloc(sizeof(int) * width);

		if (i1[ix] == NULL)
		{
			for (; ix >= 0; ix--)
				free(i1[ix]);

			free(i1);
			return (NULL);
		}
	}

	for (ix = 0; ix < height; ix++)
	{
		for (iy = 0; iy < width; iy++)
			i1[ix][iy] = 0;
	}
/*CC*/
	return (i1);
}
