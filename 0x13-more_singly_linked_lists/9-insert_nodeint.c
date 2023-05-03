#include "lists.h"

/**
 * insert_nodeint_at_index - add new node into linked list
 *
 * @head: first node
 *
 * @idx: position of new node
 *
 * @n: node to insert
 *
 * Return: always 0
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *lst;
	listint_t *lsttmp = *head;

	lst = malloc(sizeof(listint_t));

	if (!new || !head)
		return (NULL);

	lst->n = n;
	lst->next = NULL;

	if (idx == 0)
	{
		lst->next = *head;
		*head = lst;
		return (lst);
	}

	for (i = 0; lsttmp && i < idx; i++)
	{
		if (i == idx - 1)
		{
			lst->next = lsttmp->next;
			lsttmp->next = lst;
			return (lst);
		}

		else
			lsttmp = lsttmp->next;
	}

	return (NULL);
}
