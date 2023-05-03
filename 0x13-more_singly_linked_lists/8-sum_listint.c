#include "lists.h"

/**
 * sum_listint - sum of all list data
 *
 * @head: first node
 *
 * Return: always 0
 */

int sum_listint(listint_t *head)
{
	int i = 0;
	listint_t *lst = head;

	while (lst)
	{
		i += lst->n;
		lst = lst->next;
	}

	return (i);
}
