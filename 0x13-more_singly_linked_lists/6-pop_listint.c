#include "lists.h"
/**
 * pop_listint - drop node int
 * @head: parameter
 * Return: result
 *
 */
int pop_listint(listint_t **head)
{
	listint_t *h;
	int result;

	if (*head == NULL)
	{
		return (0);
	}

	h = *head;
	result = h->n;
	(*head) = (*head)->next;

	free(h);

	return (result);
}
