#include "lists.h"
/**
 * get_nodeint_at_index - get node at index
 * @head: Parameter
 * @index: Parameter
 * Return: head
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (count < index)
	{
		if (head != NULL)
		{
			head = head->next;

		}
		else
		{
			return (NULL);
		}
	    count++;
	}
	return (head);
}
