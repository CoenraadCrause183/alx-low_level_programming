#include "function_pointers.h"

/**
 * main - print opration codes
 *
 * @argc: arguments number
 *
 * @argv: arguments array
 *
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int size, i1;
	char *c1;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	size = atoi(argv[1]);

	if (size < 0)
	{
		printf("Error\n");
		exit(2);
	}
	c1 = (char *)main;

	for (i1 = 0; i1 < size; i1++)
	{
		if (i1 == size - 1)
		{
			printf("%02hhx\n", c1[i1]);
			break;
		}
		printf("%02hhx", c1[i1]);
	}
/*CC*/
	return (0);
}
