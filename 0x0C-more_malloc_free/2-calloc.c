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
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
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
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(size * nmemb);

	if (p == NULL)
		return (NULL);

	_memset(p, 0, nmemb * size);

	return (p);
}
