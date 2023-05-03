#include "lists.h"

/**
 * get_nodeint_at_index - returns certian node
 *
 * @head: first node
 *
 * @index: node to return
 *
 * Return: always 0
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *lst = head;

	while (lst && i < index)
	{
		lst = lst->next;
		i++;
	}

	return (lst ? lst : NULL);
}
