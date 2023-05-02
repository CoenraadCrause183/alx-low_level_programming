#include "lists.h"

/**
 * add_nodeint_end - add node at end
 *
 * @head: first element
 *
 * @n: data
 *
 * Return: always 0
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *lstint;
	listint_t *lsttmp = *head;

	lstint = malloc(sizeof(listint_t));
	if (!lstint)
		return (NULL);

	lstint->n = n;
	lstint->next = NULL;

	if (*head == NULL)
	{
		*head = lstint;
		return (lstint);
	}

	while (lsttmp->next)
		lsttmp = lsttmp->next;

	lsttmp->next = lstint;
	return (lstint);
}
