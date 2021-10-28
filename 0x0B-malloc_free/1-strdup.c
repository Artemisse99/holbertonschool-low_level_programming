#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 *_strdup - returns a pointer to a newly allocated space in memory
 * @str: Parameters
 * Return: pointer
 */
char *_strdup(char *str)
{
	int i = 0, other = 0;
	char *p;

	if (str == NULL)
	{
		return (NULL);
	}

	while (other <= *str)
	{
		other++;
	}

	p = malloc(sizeof(*p) * other);

	if (p == NULL)
	{
		return (NULL);
	}
	while (i < other)
	{

		p[i] = str[i];
		i++;
	}



	return (p);
}
