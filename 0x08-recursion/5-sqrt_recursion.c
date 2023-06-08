#include "main.h"

/**
 * _sqrt_recursion - square root
 *
 * @n: nr to be rooted
 *
 * Return: always 0
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (final_sqrt_recursion(n, 0));/*sqrt = square root*/
}

/**
 * final_sqrt_recursion - natural square root
 *
 * @n: nr to be rooted
 *
 * @i: iterator
 *
 * Return: always 0
 */

int final_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);

	return (final_sqrt_recursion(n, i + 1));
/**
 * CC
 */
}
