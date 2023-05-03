#include "lists.h"

/**
 * delete_nodeint_at_index - delete a node
 *
 * @head: first node
 *
 * @index: node to delete
 *
 * Return: always 0
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *lst = NULL;
	listint_t *lsttmp = *head;

	if (*head == NULL)
		return (-1);

	if (index ==0)
	{
		*head = (head)->next;
		free(lsttmp);
		return (1);
	}

	while (i < index - 1)
	{
		if (!lsttmp || !(lsttmp->next))
			return (-1);
		lsttmp = lsttmp->next;
		i++
	}

	lst = lsttmp->next;
	lsttmp->next = lst->next;
	free(lst);
	return (1);
}
