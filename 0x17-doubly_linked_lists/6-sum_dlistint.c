#include "lists.h"
#include "head.c"

/**
 * sum_dlistint - add node of the list
 * @head: parameter of the node
 * Return: 0
 */

int sum_dlistint(dlistint_t *head)
{
	if (head)
		return (sum_dlistint(Next(head)) + head->n);
	return (0);
}
