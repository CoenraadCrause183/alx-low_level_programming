#include "main.h"

/**
 * argstostr - main
 *
 * @ac: input
 *
 * @av: array
 *
 * Return: always 0
 */

char *argstostr(int ac, char **av)
{
	int i1, i2, i3 = 0, i4 = 0;
	char *c1;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i1 = 0; i1 < ac; i1++)
	{
		for (i2 = 0; av[i1][i2]; i2++)
			i4++;
	}

	i4 += ac;

	c1 = malloc(sizeof(char) * i4 + 1);

	if (c1 == NULL)
		return (NULL);

	for (i1 = 0; i1 < ac; i1++)
	{
		for (i2 = 0; av[i1][i2]; i2++)
		{
			c1[i3] = av[i1][i2];
			i3++;
		}
		if (c1[i3] == '\0')
		{
			c1[i3++] = '\n';
		}
	}
/*CC*/
	return (c1);
}
