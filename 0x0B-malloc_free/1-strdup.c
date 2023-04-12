#include "main.h"

/**
 * _strdup - duplicate
 *
 * @str: char
 *
 * Return: always 0
 */

char *_strdup(char *str)
{
	char *c;
	int i, r = 0;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;

	c = malloc(sizeof(char) * (i + 1));

	if (c == NULL)
		return (NULL);

	for (r = 0; str[r]; r++)
		c[r] = str[r];

	return (c);
}
