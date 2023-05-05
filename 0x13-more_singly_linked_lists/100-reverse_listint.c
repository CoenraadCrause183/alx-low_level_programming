#include "lists.h"

/**
 * reverse_listint - reverse list
 *
 * @head: first node
 *
 * Return: always 0
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *lstn = NULL;
	listint_t *lstp = NULL;

	while (*head)
	{
		lstn = (*head)->next;
		(*head)->next = lstp;
		lstp = *head;
		*head = lstn;
	}
	*head = lstp;

	return (*head);
}
