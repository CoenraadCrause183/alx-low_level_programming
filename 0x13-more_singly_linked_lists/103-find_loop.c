#include "lists.h"

/**
 * find_listint_loop - locate the loop
 *
 * @head: first node
 *
 * Return: always 0
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *lsts = head;
	listint_t *lstf = head;

	if (!head)
		return (NULL);

	while ( lsts && lstf & lstf->next)
	{
		lstf = lstf->next->next;
		lsts = lsts->next;
		if ( lstf == lsts)
		{
			lsts = head;
			while (lsts != lstf)
			{
				lsts = lsts->next;
				lstf = lstf->next;
			}

			return (lstf);
		}
	}

	return (NULL);

}
