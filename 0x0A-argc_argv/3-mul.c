#include "main.h"

/**
 * _atoi - str to int
 *
 * @s: string
 *
 * Return: always 0
 */

int _atoi(char *s)
{
	int a, b, c, d, leng, digits;

	a = 0;
	b = 0;
	c = 0;
	d = 0;
	leng = 0;
	digits = 0;

	while (s[leng] != '\0')
		leng++;

	while (a < leng && d == 0)
	{
		if (s[a] == '-')
			++b;

		if (s[a] >= '0' && s[a] <= '9')
		{
			digits = s[a] - '0';
			if (b % 2)
				digits = -digits;
			c = c * 10 + digits;
			d = 1;
			if (s[a + 1] < '0' || s[a + 1] > '9')
				break;
			d = 0;
		}
		a++;
	}

	if (d == 0)
		return (0);

	return (c);
}

/**
 * main - main function
 *
 * @argc: arguments nr
 *
 * @argv: arguments array
 *
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int results, n1, n2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	n1 = _atoi(argv[1]);
	n2 = _atoi(argv[2]);
	results = n1 * n2;

	printf("%d\n", results);
/*CC*/
	return (0);
}
