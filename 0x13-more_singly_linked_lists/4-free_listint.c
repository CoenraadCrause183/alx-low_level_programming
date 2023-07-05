#include "lists.h"

/**
 * free_listint - free willy
 *
 * @head: list to free
 */

void free_listint(listint_t *head)
{
	listint_t *lsttmp1;

	while (head)
	{
		lsttmp1 = head->next;
		free(head);
		head = lsttmp1;
/*CC*/	}
}
