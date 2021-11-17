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
	size_t i = 0;
	listint_t *currentNode;
	listint_t **nextForPosition;

	currentNode = malloc(sizeof(listint_t));

	currentNode->n = n;


	nextForPosition = head;

	for (i = 0; i < idx && *nextForPosition != NULL; i++)
	{

		nextForPosition = &(*nextForPosition)->next;
	}

	currentNode->next = *nextForPosition;
	*nextForPosition = currentNode;

	return (*head);

}
