#include "lists.h"

/**
 * print_list - prints liked list
 *
 * @h: list to print
 *
 * Return: always 0
 */

size_t print_list(const list_t *h)
{
	size_t si = 0;

	while (h)
	{
		if (!h -> str)
			printf("[0] (nil)\n");

		else
			printf("[%u] %s\n", h -> len, h -> str);

		h = h -> next;

		s++;
	}

	return (s);
}
