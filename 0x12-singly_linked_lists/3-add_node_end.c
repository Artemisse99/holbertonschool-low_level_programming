#include "lists.h"
/**
 *add_node_end - add node at end
 *@head: parameter
 *@str: parameter
 *
 *
 */
list_t add_node_end(list_t *head, const char *str)
{
	list_t *end_node;
	list_t list_new = head;
	int i;

	end_node = malloc(sizeof(list_t));

	if (end_node == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)
		;

	end_node->str = strdup(str);
	end_node->len = i;
	end_node->next = NULL;


	if (*head == NULL)
	{
		*head = end_node;
		return (end_node);
	}

	while (list_new->next != NULL)
	{
		list_new = list_new->next;
	}

	list_new->next = end_node;

	return (end_node);
}
