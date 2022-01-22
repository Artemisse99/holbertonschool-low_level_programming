#include "lists.h"
#include "head.c"

/**
 * get_dnodeint_at_index - get index node
 * @head: parameter node
 * @index: index of the node
 *
 * Return: L
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *L = head;

	if (!L)
		return (NULL);
	if (!index)
		return (L);
	for (; index > 0; index--)
	{
		if (!Next(L))
			return (NULL);
		L = Next(L);
	}
	return (L);
}
