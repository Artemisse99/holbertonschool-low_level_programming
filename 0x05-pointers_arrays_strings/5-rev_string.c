#include "main.h"
/**
 * rev_string - Write a function that reverses a string
 * @s: data
 */
void rev_string(char *s)
{
	char *i = s;
	char e;

	for (; *(s); s++)
	{
	}
	s--;
	for (; s >= i; s--)
	{
		e = *i;
		*i = *s;
		*s = e;
		i++;
	}
}
