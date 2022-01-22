#include "lists.h"
#include "head.c"

/**
 * print_dlistint - print list
 * @h: parameter
 * Return: 0
 */

size_t print_dlistint(const dlistint_t *h)
{
	if (thereAre(h))
	{
		printNode(h);
		return (print_dlistint(Next(h)) + 1);
	}
	return (0);
}
