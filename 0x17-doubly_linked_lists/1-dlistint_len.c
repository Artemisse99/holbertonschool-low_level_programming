#include "lists.h"
#include "head.c"

/**
 * dlistint_len - length of the list
 * @h: parameter
 * Return: 0
 */
size_t dlistint_len(const dlistint_t *h)
{
	if (thereAre(h))
		return (dlistint_len(Next(h)) + 1);
	return (0);
}
