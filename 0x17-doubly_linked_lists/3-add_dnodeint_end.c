#include "lists.h"

/**
 * add_dnodeint_end - add node at end
 * @head: parameter double pointer
 * @n: parameter int
 * Return: new node
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = NULL;
	dlistint_t *tmp = *head;

	if (!head)
		return (NULL);

	new_node = createNode(n);
	if (!new_node)
		return (NULL);
	if (!*head)
	{
		*head = new_node;
		return (new_node);
	}
	while (Next(tmp))
		tmp = Next(tmp);
	insertAfter(new_node, tmp);
	return (new_node);
}
