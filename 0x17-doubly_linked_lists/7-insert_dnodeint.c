#include "lists.h"

/**
 * insert_dnodeint_at_index - sdadsa
 * @h: asdasd
 * @idx: adkln
 * @n: asdasd
 * Return: asdas
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp = *h;
	dlistint_t *v_insert;

	if (idx == 0)
	{
		v_insert = createNode(n);

		if (!v_insert)
			return (NULL);
		add_dnodeint(h, n);
		return (v_insert);
	}

	while (thereAre(tmp) && idx > 1)
	{
		tmp = Next(tmp);
		idx--;
	}

	if (!thereAre(tmp))
		return (NULL);

	v_insert = createNode(n);

	if (!v_insert)
		return (NULL);

	insertAfter(v_insert, tmp);
	return (v_insert);
}
