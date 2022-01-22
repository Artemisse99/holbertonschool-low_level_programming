#include "lists.h"

dlistint_t *Next(const dlistint_t *L)
{
	return (L->next);
}

const dlistint_t *thereAre(const dlistint_t *L)
{
	if (L)
		return (L);
	return (NULL);
}
void printNode(const dlistint_t *L)
{
	printf("%d\n", L->n);
}
