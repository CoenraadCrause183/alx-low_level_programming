#include "main.h"

/**
 * factorial - returns factor
 *
 * @n: nr to be factored
 *
 * Return: always 0
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}//CC
