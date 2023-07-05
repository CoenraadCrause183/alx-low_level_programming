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
	unsigned int i1 = 0;
	listint_t *lst1 = head;

	while (lst1 && i1 < index)
	{
		lst1 = lst1->next;
		i1++;
	}
/*CC*/
	return (lst1 ? lst1 : NULL);
}
