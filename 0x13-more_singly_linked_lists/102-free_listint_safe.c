#include "lists.h"

/**
 * free_listint_safe - free list
 *
 * @h: first node(head)
 *
 * Return: always 0
 */

size_t free_listint_safe(listint_t **h)
{
	size_t leng = 0;
	int dif;
	listint_t *lst;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		dif = *h - (*h)->next;
		if (dif > 0)
		{
			lst = (*h)->next;
			free(*h);
			*h = lst;
			leng++;
		}

		else
		{
			free(*h);
			*h = NULL;
			leng++;
			break;/* CC */
		}
	}

	*h = NULL;
	return (leng);
}
