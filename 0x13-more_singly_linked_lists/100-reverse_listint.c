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
	listint_t *lstn1 = NULL;
	listint_t *lstp1 = NULL;

	while (*head)
	{
		lstn1 = (*head)->next;
		(*head)->next = lstp1;
		lstp1 = *head;
		*head = lstn1;
	}
	*head = lstp1;
/*CC*/
	return (*head);
}
