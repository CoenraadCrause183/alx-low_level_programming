#include "main.h"

/**
 * is_palindrome - check if palindrome
 *
 * @s: string
 *
 * Return: always 0
 */

int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);

	return (check_pal(s, 0, _strlen_recursion(s)));
}

/*
 * _strlen_recursion - str length
 *
 * @s: string
 *
 * Return: always 0
 */

int _strlen_recursion(char *c)
{
	if (*c == '\0')
		return (0);

	return (1 + _strlen_recursion(c + 1));
}

/*
 * check_pal - check if palindrome
 *
 * @s: string
 *
 * @i: interger
 *
 * @leng: str length
 *
 * Return: always 0
 */

int check_pal(char *c, int i, int leng)
{
	if (*(c + i) != *(c + leng - 1))
		return (0);

	if (i >= leng)
		return (1);
/*CC*/
	return (check_pal(c, i + 1, leng - 1));
}
