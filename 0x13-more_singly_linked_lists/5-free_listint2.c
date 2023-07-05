#include "lists.h"

/**
 * free_listint2 - free the list
 *
 * @head: list to be freed
 */

void free_listint2(listint_t **head)
{
	listint_t *lstint1;

	if (head == NULL)
		return;

	while (*head)
	{
		lstint1 = (*head)->next;
		free(*head);
		*head = lstint1;
/*CC*/	}

	*head = NULL;
}
