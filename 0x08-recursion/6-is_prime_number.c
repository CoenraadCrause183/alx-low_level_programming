#include "main.h"

/**
 * is_prime_number - check if prime nr
 *
 * @n: nr to check
 *
 * Return: always 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (final_prime(n, n - 1));
}

/**
 * final_prime - check if prime
 *
 * @n: nr to check
 *
 * @i: iterator
 */

int final_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);

	return (final_prime(n, i - 1));
/* CC */
}
