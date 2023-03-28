#include "main.h"

/**
 * _puts - prints str
 *
 * @str: string to print
 *
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
		_putchar('\n');
}
