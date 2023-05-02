#include "lists.h"

/**
 * free_listint2 - free the list
 *
 * @head: list to be freed
 */

void free_listint2(listint_t **head)
{
	listint_t *lstint;

	if (head == NULL)
		return;

	while (*head)
	{
		lstint = (*head)->next;
		free(*head);
		*head = lstint;
	}

	*head = NULL;
}
