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
	char *c1;
	int i1, i2;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	i1 = i2 = 0;

	while (s1[i1] != '\0')
		i1++;

	while (s2[i2] != '\0')
		i2++;

	c1 = malloc(sizeof(char) * (i1 + i2 + 1));

	if (c1 == NULL)
		return (NULL);

	i1 = i2 = 0;

	while (s1[i1] != '\0')
	{
		c1[i1] = s1[i1];
		i1++;
	}

	while (s2[i1] != '\0')
	{
		c1[i1] = s2[i2];
		i1++, i2++;
	}
	c1[i1] = '\0';
/*CC*/	return (c1);
}
