#include "lists.h"

/**
 * free_list - free the list
 *
 * @head: list to free
 *
 * Return: always 0
 */

void free_list(list_t *head)
{
	list_t *lst;

	while (head)
	{
		lst = head->next;
		free(head->str);
		free(head);
		head = lst;
	}

	return (0);
}
