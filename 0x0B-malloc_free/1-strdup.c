#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 *_strdup - returns a pointer to a newly allocated space in memory, which contains a copy of the string given as a parameter.
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

	p = malloc(sizeof(char) * other);

	while (i < other)
	{

		p[i] = str[i];
		i++;
	}

	if (p == NULL)
	{
		return (NULL);
	}

	return (p);
}
