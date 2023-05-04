#include "lists.h"

/**
 * looped_listint_len - count nodes
 *
 * @head: first ode
 *
 * Return: always 0
 */

size_t looped_listint_len(const listint_t *head)
{
	const listint_t *lsts, *lstf;
	size_t n = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	lsts = head->next;
	lstf = (head->next)->next;

	while (lstf)
	{
		if (lsts == lstf)
		{
			lsts = head;
			while (lsts != lstf)
			{
				lsts = lsts->next;
				lstf = lstf->next;
				n++;
			}
			lsts = lsts->next;

			while (lsts != lstf)
			{
				lsts = lsts->next;
				n++;
			}
			return (n);
		}

		lsts = lsts->next;
		lstf = (lstf->next)->next;
	}
	return (0);
}

/**
 * print_listint_safe - print list ... safely
 *
 * @head: first node
 *
 * Return: always 0
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t nod, idx = 0;

	nod = looped_listint_len(head);

	if (nod == 0)
	{
		for (; head != NULL; nod++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (idx = 0; idx < nod; idx++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (nod);/* CC */
}
