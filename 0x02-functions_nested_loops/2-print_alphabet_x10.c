#include "main.h"

/**
 * main - main function
 *
 * void print_alphabet_x10 - print 10 times
 *
 * Return: always 0
 */

int void print_alphabet_x10(void)
{
	char ch;
	int i;

	for (i = 1 ; i <= 10 ; i++)
{
	for (ch = 'a' ; ch <= 'z' ; ch++)
		_putchar(ch);
	_putchar('\n');
}
}
