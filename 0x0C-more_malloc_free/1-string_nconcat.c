#include "main.h"

/**
 * *string_nconcat - string to string
 *
 * @s1: string 1
 *
 * @s2: string 2
 *
 * @n: s2 to s1
 *
 * Return: always 0
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *c1;
	unsigned int i1 = 0, i2 = 0, i3 = 0, i4 = 0;

	while (s1 && s1[i3])
		i3++;
	while (s2 && s2[i4])
		i4++;

	if (n < i4)
		c1 = malloc(sizeof(char) * (i3 + n + 1));
	else
		c1 = malloc(sizeof(char) * (i3 + i4 + 1));

	if (!c1)
		return (NULL);

	while (i1 < i3)
	{
		c1[i1] = s1[i1];
		i1++;
	}

	while (n < i4 && i1 < (i3 + n))
		c1[i1++] = s2[i2++];

	while (n >= i4 && i1 < (i3 + i4))
		c1[i1++] = s2[i2++];

	c1[i1] = '\0';
/*CC*/
	return (c1);
}
