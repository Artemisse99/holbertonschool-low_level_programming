#include "lists.h"
/**
 *free_list - free list
 *@head: parameter
 *
 *
 */
void free_list(list_t *head)
{
	list_t *node;
	list_t *release;

	node = head;

	while (node != NULL)
	{
		release = node->next;
		free(node->str);
		free(node);
		node = release;
	}
}
