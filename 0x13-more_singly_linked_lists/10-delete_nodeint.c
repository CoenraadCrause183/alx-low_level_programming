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
	unsigned int i1 = 0;
	listint_t *lst1 = NULL;
	listint_t *lsttmp1 = *head;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(lsttmp1);
		return (1);
	}

	while (i1 < index - 1)
	{
		if (!lsttmp1 || !(lsttmp1->next))
			return (-1);
		lsttmp1 = lsttmp1->next;
		i1++;
	}

	lst1 = lsttmp1->next;
	lsttmp1->next = lst1->next;
	free(lst1);
/*CC*/
	return (1);
}
