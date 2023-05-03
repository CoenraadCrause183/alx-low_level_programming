#include "main.h"

/**
 * is_palindrome - check if palindrome
 *
 * @s: string to check
 *
 * Return: always 0
 */

int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_palin(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - return str length
 *
 * @s: string to check
 *
 * Return: always 0
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return ( 1 + _strlen_recursion(s + 1));
}

/**
 * check_palin - check if palindrome
 *
 * @s: string to check
 *
 * @i: iterator
 *
 * @leng: str length
 *
 * Return: always 0
 */

int check_palin(char *s, int i, int leng)
{
	if (*(s + i) != *(s + leng - 1))
		return (0);

	if (i >= leng)
		return (1);

	return (check_palin(s, i + 1, leng - 1));
}
