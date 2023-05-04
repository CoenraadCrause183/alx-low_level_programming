#include "function_pointers.h"
#include "3-calc.h"

/**
 * main - prints result
 *
 * @argc: arguments nr
 *
 * @argv: arguments array
 *
 * Return: always 0
 */

int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int i1, i2;
	char *opp;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	i1 = atoi(argv[1]);
	opp = argv[2];
	i2 = atoi(argv[3]);

	if (get_op_func(opp) == NULL || opp[1] != '\0')
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", get_op_func(opp)(i1 , i2));

	return (0);
}
