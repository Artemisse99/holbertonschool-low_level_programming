#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 *str_concat - function that concatenates two strings
 * @s1: Parameters
 * @s2: Parameters
 * Return: pointer
 */

char *str_concat(char *s1, char *s2)
{
	int s = 0, a, b;

	char *r;


	a = strlen(s1);
	b = strlen(s2);
	r = malloc(sizeof(char) * a + b);

	while (*s1)
	{
		r[s] = *s1;
		s++;
		s1++;
	}

	while (*s2)
	{
		r[s] = *s2;
		s++;
		s2++;
	}
	return (r);
}
