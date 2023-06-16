#include "main.h"

/**
 * *_memset - memory byte
 *
 * @s: memory area
 *
 * @b: char
 *
 * @n: copy amount
 *
 * Return: always 0
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i1;

	for (i1 = 0; i1 < n; i1++)
	{
		s[i1] = b;
	}

	return (s1);
}

/**
 * *_calloc - allocates array mem
 *
 * @nmemb: elements in array
 *
 * @size: element size
 *
 * Return: always 0
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *c1;

	if (nmemb == 0 || size == 0)
		return (NULL);

	c1 = malloc(size * nmemb);

	if (c1 == NULL)
		return (NULL);

	_memset(c1, 0, nmemb * size);
/*CC*/
	return (c1);
}
