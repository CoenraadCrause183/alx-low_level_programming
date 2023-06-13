#include "main.h"

/**
 * create_array - creates array
 *
 * @size: array size
 *
 * @c: char
 *
 * Return: always 0
 */

char *create_array(unsigned int size, char c)
{
	char *str1;
	unsigned int i1;

	str1 = malloc(sizeof(char) * size);
	if (size == 0 || str1 == NULL)
		return (NULL);
/*CC*/
	for (i1 = 0; i1 < size; i1++)
		str1[i1] = c;
	return (str1);
}
