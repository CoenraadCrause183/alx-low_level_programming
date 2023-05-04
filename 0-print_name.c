#include "function_pointers.h"

/**
 * print_name - prints the pointed name
 *
 * @name: string
 *
 * @f: points to function
 *
 * Return: always 0
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
/* CC */
}
