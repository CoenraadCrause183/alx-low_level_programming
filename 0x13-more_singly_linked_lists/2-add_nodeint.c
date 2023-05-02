#include "lists.h"

/**
 * add_nodeint - add new node at start
 *
 * @head: first node
 *
 * @n: data
 *
 * Return: always 0
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *lstint;

	lstint = malloc(sizeof(listint_t));
	if (!lstint)
		return (NULL);

	lstint->n = n;
	lstint->next = *head;
	*head = lstint;

	return (lstint);
}
