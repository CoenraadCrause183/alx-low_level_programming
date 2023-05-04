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
	int size, in;
	char *ar;

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
	ar = (char *)main;

	for (in = 0; in < size; in++)
	{
		if (in == size - 1)
		{
			printf("%02hhx\n", ar[in]);
			break;
		}
		printf("%02hhx", ar[in]);
	}

	return (0);
}
