#include "main.h"

/**
 * print_rev - prints rev
 *
 * @s: string
 *
 * Return: always 0
 */

void print_rev(char *s)
{
	int longi = 0;
	int i = o;

	while (*s != '\0')
	{
		longi++;
		s++;
	}
	s--;
	for (o = longi; o > 0; o--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}
