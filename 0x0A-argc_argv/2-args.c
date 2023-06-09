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
	int i1;

	for (i1 = 0; i1 < argc; i1++)
	{
		printf("%s\n", argv[i1]);
	}
/*CC*/
	return (0);
}
