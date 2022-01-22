#include "lists.h"

/**
 * delete_dnodeint_at_index - delete node whit index
 * @head: parameter node
 * @index: index node
 *
 * Return: Always 0 (Success)
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp = *head;

	if (!head || !*head)
		return (-1);

	if (!index)
	{
		*head = Next(tmp);
		if (Next(tmp))
			tmp->next->prev = NULL;
		freeNode(tmp);
		return (1);
	}

	while (thereAre(tmp) && index > 0)
	{
		tmp = Next(tmp);
		index--;
	}
	if (thereAre(tmp))
	{
		tmp->prev->next = Next(tmp);
		if (Next(tmp))
			tmp->next->prev = before(tmp);
		freeNode(tmp);
		return (1);
	}
	return (-1);
}
