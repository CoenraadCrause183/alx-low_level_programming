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
	int i1 = 0;
	listint_t *lst1 = head;

	while (lst1)
	{
		i1 += lst1->n;
		lst1 = lst1->next;
	}
/*CC*/
	return (i1);
}
