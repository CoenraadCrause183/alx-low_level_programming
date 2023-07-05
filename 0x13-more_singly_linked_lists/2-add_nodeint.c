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
	listint_t *lstint1;

	lstint1 = malloc(sizeof(listint_t));
	if (!lstint1)
		return (NULL);

	lstint1->n = n;
	lstint1->next = *head;
	*head = lstint1;
/*CC*/
	return (lstint1);
}
