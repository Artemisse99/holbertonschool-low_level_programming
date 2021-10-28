#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
/**
 *malloc_checked - function that allocates memory using malloc
 * @b: Parameters
 * Return: pointer
 */
void *malloc_checked(unsigned int b)
{
	void *s;

	s = malloc(b);
	if (s == NULL)
	{
		exit(98);
	}

	return (s);
}
