#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 *listint_len - length lists int
 *@h: parameter
 *Return: count
 *
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
