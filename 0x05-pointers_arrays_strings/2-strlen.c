#include "main.h"

/**
 * _strlen - main function
 *
 * @s: string
 *
 * Return: always 0
 */

int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
		{
			i++;
			s++;
		}
	return (i);
}
