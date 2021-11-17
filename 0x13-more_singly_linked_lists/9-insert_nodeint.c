#include "lists.h"
/**
 *insert_nodeint_at_index -insert nnode int at index
 *@head: parameter
 *@idx: parameter
 *@n: parameter
 *Return: head
 *
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *prev;
	listint_t *pcurr;
	listint_t *pnew;

	pnew = malloc(sizeof(listint_t));
	pnew->n = n;

	prev = NULL;
	for (pcurr = *head;  pcurr != NULL;  pcurr = pcurr->next, i += 1)
	{
		if (i > idx)
			break;
		prev = pcurr;
	}

	pnew->next = pcurr;

	if (prev != NULL)
		prev->next = pnew;


	else
		*head = pnew;

	return (*head);
}
