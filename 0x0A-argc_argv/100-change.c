#include "main.h"

/*
 * main - prints the change
 *
 * @argc: arguments nr
 *
 * @argv: arguments array
 *
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int i1, i2, i3;
	int coins[] = {1, 2, 5, 10, 25};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

/*CC*/	i1 = atoi(argv[1]);
	i3 = 0;

	if (i1 < 0)
	{
		printf("0\n");
		return (0);
	}

	for (i2 = 0; i2 < 5 && i1 >= 0; i2++)
	{
		while (i2 >= coins[i2])
		{
			i3++;
			i1 -= coins[i2];
		}
	}

	printf("%d\n", i3);
	return (0);
}
