#include "main.h"

/**
 * _memset - fill a block of memory with a specific value
 *
 * @s: starting address
 *
 * @b: value
 *
 * @n: number of bytes
 *
 * Return: always 0
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;


	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
