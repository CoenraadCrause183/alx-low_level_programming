#include "function_pointers.h"

/**
 * print_name - prints the name with pointers
 *
 * @name: str to print
 *
 * @f: print function
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
