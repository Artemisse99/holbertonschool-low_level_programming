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
dlistint_t *before(const dlistint_t *L)
{
	return (L->prev);
}
void insertBefore(dlistint_t *v_insert, dlistint_t *site)
{
	v_insert->next = site;
	if (thereAre(before(site)))
		site->prev->next = v_insert;
	v_insert->prev = before(site);
	site->prev = v_insert;
}

void insertAfter(dlistint_t *v_insert, dlistint_t *site)
{
	v_insert->prev = site;
	v_insert->next = Next(site);
	if (thereAre(Next(site)))
		site->next->prev = v_insert;
	site->next = v_insert;
}
dlistint_t *createNode(const int n)
{
	dlistint_t *node = malloc(sizeof(dlistint_t));

	if (!node)
		return (NULL);
	node->n = n;
	node->prev = NULL;
	node->next = NULL;

	return (node);
}
