#include "main.h"

/**
 * check_num - nr of strings
 *
 * @str: array str
 *
 * Return: always 0
 */

int check_num(char *str)
{
	unsigned int checknr;

	checknr = 0;
	while (checknr < strlen(str))

	{
		if (!isdigit(str[checknr]))
		{
			return (0);
		}

		checknr++;
	}
	return (1);
}

/**
 * main - print name
 *
 * @argc: arguments nr
 *
 * @argv: arguments array
 *
 * Return: always 0
 */

int main(int argc, char *argv[])

{
	int checknr;
	int str_int;
	int sum = 0;

	checknr = 1;
	while (checknr < argc)
	{
		if (check_num(argv[checknr]))

		{
			str_int = atoi(argv[checknr]);
			sum += str_int;
		}

		else
		{
			printf("Error\n");
			return (1);
		}

		checknr++;
	}

	printf("%d\n", sum);
/*CC*/
	return (0);
}
