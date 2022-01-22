#include "lists.h"

/**
 * add_dnodeint - add node
 * @head: parameter double pointer
 * @n: parameter int
 * Return: new node
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = NULL;

	if (!head)
		return (NULL);

	new_node = createNode(n);
	if (!new_node)
		return (NULL);
	if (thereAre(*head))
		insertAfter(new_node, *head);
	*head = new_node;
	return (new_node);
}
