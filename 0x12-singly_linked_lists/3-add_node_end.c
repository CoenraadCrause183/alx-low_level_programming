#include "lists.h"

/**
 * add_node_end - adds node at end
 *
 * @head: poitns to the list
 *
 * @str: string to add
 *
 * Return: always 0
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *lst;
	list_t *lstt = *head;
	unsigned int leng = 0;

	while (str[leng])
		leng++;
	lst = malloc(sizeof(list_t));

	if (!lst)
		return (NULL);

	lst->str = strdup(str);
	lst->leng = leng;
	lst->next = NULL;

	if (*head == NULL)
	{
		*head = lst;
		return (lst);
	}

	while (lstt->next)
		lstt = lstt->next;

	lstt->next = lst;

	return (lst);
}
