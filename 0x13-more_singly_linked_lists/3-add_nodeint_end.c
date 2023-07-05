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
	listint_t *lstint1;
	listint_t *lsttmp1 = *head;

	lstint1 = malloc(sizeof(listint_t));
	if (!lstint1)
		return (NULL);

	lstint1->n = n;
	lstint1->next = NULL;

	if (*head == NULL)
	{
		*head = lstint1;
		return (lstint1);
	}

	while (lsttmp1->next)
		lsttmp1 = lsttmp1->next;
/*CC*/
	lsttmp1->next = lstint1;
	return (lstint1);
}
