#include "main.h"

/**
 * _strlen - returns the length
 *
 * @s: string
 *
 * Return: always 0
 */

int _strlen(char *s)
{
	int longi = 0;


	while (*s != '\0')
	{
		longi++;
		s++;
	}


	return (longi);
}
