#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
/**
 *str_concat - function that concatenates two strings
 * @s1: Parameters
 * @s2: Parameters
 * Return: pointer
 */
void *malloc_checked(unsigned int b)
{
	void *s;

	s = malloc(b);
	if(s == NULL)
	{
		exit(98);
	}

	return (s);
}
