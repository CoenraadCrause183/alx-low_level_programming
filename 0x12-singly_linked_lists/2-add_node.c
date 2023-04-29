#include "lists.h"

/**
 * add_node - adds node to linked list
 *
 * @head: list pointer
 *
 * @str: str to add
 *
 * Return: always 0
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *lst;
	unsigned int len = 0;

	while (str[len])
		len++;

	lst = malloc(sizeof(list_t));
	if (!lst)
		return (NULL);

	lst->str = strddup(str);
	lst->len = len;
	lst->next = (*head);
	(*head) = lst;

	return (*head);
}
