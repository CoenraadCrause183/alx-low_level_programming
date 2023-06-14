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
	char *c1;
	int i1, i2 = 0;

	if (str == NULL)
		return (NULL);
	i1 = 0;
	while (str[i1] != '\0')
		i1++;

	c1 = malloc(sizeof(char) * (i1 + 1));

	if (c1 == NULL)
		return (NULL);

	for (i2 = 0; str[i2]; i2++)
		c1[i2] = str[i2];
/*CC*/
	return (c1);
}
