#include "lists.h"

/**
 * print_listint - prints linked list
 *
 * @h: list to print
 *
 * Return: always 0
 */

size_t print_listint(const listint_t *h)
{
	size_t nr = 0;

	while (h)
	{
		printf("%d\n", h->n);
		nr++;
		h = h->next;
	}

	return (nr);
}
