#include "lists.h"

/**
 * freeNode - free node
 * @v_free: parameter at free
 */

void freeNode(dlistint_t *v_free)
{
	free(v_free);
}

/**
 * free_dlistint - free node of the list
 * @head: parameter node
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *L = head;

	if (!L)
		return;

	while (Next(L))
	{
		L = Next(L);
		freeNode(before(L));
		L->prev = NULL;
	}
	freeNode(L);
}
