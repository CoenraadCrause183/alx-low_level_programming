#include "main.h"
		
/**
 * _isalpha - checks alphabet
 *
 * @c: char
 *
 * Return: always 0
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
