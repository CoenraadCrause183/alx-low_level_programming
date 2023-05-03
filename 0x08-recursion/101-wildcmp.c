#include "main.h"

/**
 * wildcmp - compare str
 *
 * @s1: str nr 1
 *
 * @s2: str nr 2
 *
 * Return: always 0
 */

int wildcmp(char *s1, char *s2)
{
	if (s1 == '\0')
	{
		if (*s2 != '\0' && *s2 == '*')
		{
			return (wildcmp(s1, s2 + 1));
		}
		return (*s2 == '\0'); /* '\0' terminate str */
	}

	if (*s2 == '*') /*opisate of first code */
	{
		return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 +1));
	}

	else if (*s1 == *s2) /* 1 and 2 */
	{
		return (wildcmp(s1 +1, s2 +1));
	}
	
	return (0);
}
