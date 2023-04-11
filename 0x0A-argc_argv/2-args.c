#include "main.h"

/**
 * main - prints arg received
 *
 * @argc: arguments nr
 *
 * @argv: arguments array
 *
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
