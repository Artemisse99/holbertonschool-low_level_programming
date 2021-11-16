#include "lists.h"
/**
 * pop_listint - drop node int
 * @head: parameter
 * Return: result
 *
 */
int pop_listint(listint_t **head)
{
	if (*head == NULL)
	{
		return (-1);
	}

	listint_t *h = *head;
	int result = h->n;
	(*head) = (*head)->next;

	free(h);

	return (result);
}
