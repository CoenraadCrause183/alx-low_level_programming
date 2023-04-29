#include "lists.h"

/**
 * list_len - element count in list
 *
 * @h: points the list
 *
 * Return: always 0
 */

size_t list_len(const list_t *h)
{
	size_t si = 0;

	while (h)
	{
		si++;
		h = h->next;
	}

	return (si);
}
