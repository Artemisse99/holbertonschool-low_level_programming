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

	other = strlen(str);

	p = malloc(sizeof(*p) + 1 * other);

	if (p == NULL)
	{
		return (NULL);
	}
	while (i < other)
	{

		p[i] = str[i];
		i++;
	}

	p[i] = '\0';
	return (p);
}
