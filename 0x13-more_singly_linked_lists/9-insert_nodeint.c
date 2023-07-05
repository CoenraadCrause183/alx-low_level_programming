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
	unsigned int i1;
	listint_t *lst1;
	listint_t *lsttmp1 = *head;

	lst1 = malloc(sizeof(listint_t));

	if (!lst1 || !head)
		return (NULL);

	lst1->n = n;
	lst1->next = NULL;

	if (idx == 0)
	{
		lst1->next = *head;
		*head = lst1;
		return (lst1);
	}

	for (i1 = 0; lsttmp1 && i1 < idx; i1++)
	{
		if (i1 == idx - 1)
		{
			lst1->next = lsttmp1->next;
			lsttmp1->next = lst1;
			return (lst1);
		}

		else
			lsttmp1 = lsttmp1->next;
	}
/*CC*/
	return (NULL);
}
