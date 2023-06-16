#include "main.h"

/**
 * *malloc_checked - allocates memory
 *
 * @b: bytes
 *
 * Return: always 0
 */

void *malloc_checked(unsigned int b)
{
	void *p1;

	p1 = malloc(b);

	if (p1 == NULL)
		exit(98);
/*CC*/
	return (p1);
}
