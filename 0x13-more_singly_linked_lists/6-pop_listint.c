#include "lists.h"

/**
 * pop_listint - delete head node
 *
 * @head: first element
 *
 * Return: always 0
 */

int pop_listint(listint_t **head)
{
	listint_t *lst1;
	int i1;

	if (!head || !*head)
		return (0);

	i1 = (*head)->n;
	lst1 = (*head)->next;
	free(*head);
	*head = lst1;
/*CC*/
	return (i1);
}
