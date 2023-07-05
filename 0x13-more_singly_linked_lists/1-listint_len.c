#include "lists.h"

/**
 * listint_len - return liked list elements
 *
 * @h: the list
 *
 * Return: always 0
 */

size_t listint_len(const listint_t *h)
{
	size_t nr1 = 0;

	while (h)
	{
		nr1++;
		h = h->next;
	}
/*CC*/
	return (nr1);
}
