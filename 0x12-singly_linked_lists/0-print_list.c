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
	size_t s1 = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");

		else
			printf("[%u] %s\n", h->i1, h->str);

		h = h->next;

		s1++;
	}
/*CC*/
	return (s1);
}
