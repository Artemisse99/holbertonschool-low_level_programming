#include "lists.h"
/**
 *free_listint - free list int
 *@head: parameter
 *
 *
 */
void free_listint(listint_t *head)
{
	listint_t *release;

	while (head != NULL)
	{
		release = head->next;
		free(head);
		head = release;
	}
}
