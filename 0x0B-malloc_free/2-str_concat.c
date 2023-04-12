#include "main.h"

/**
 * str_concat - size of inputs
 *
 * @s1: input 1
 *
 * @s2: input 2
 *
 * Return: always 0
 */

char *str_concat(char *s1, char *s2)
{
	char *c;
	int i, ci;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	i = ci = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[ci] != '\0')
		ci++;
	c = malloc(sizeof(char) * (i + ci + 1));

	if (c == NULL)
		return (NULL);
	i = ci = 0;
	while (s1[i] != '\0')
	{
		c[i] = s1[i];
		i++;
	}

	while (s2[ci] != '\0')
	{
		c[i] = s2[ci];
		i++, ci++;
	}
	c[i] = '\0';
	return (c);
}
