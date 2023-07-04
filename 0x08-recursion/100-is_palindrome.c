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

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);

	return (1 + _strlen_recursion(s + 1));
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

int check_pal(char *s, int i, int leng)
{
	if (*(s + i) != *(s + leng - 1))
		return (0);

	if (i >= leng)
		return (1);
/*CC*/
	return (check_pal(s, i + 1, leng - 1));
}
