#include "main.h"

/**
 * _strlen_recursion - length of str
 *
 * @s: string
 *
 * Return: always 0
 */

int _strlen_recursion(char *s)
{
	int longint = 0;

	if (*s)
	{
		longint++;
		longint += _strlen_recursion(s + 1);
	}

	return (longint);/*CC*/
}
