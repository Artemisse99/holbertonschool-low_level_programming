#include "main.h"
/**
 *_memcpy - kjkjl
 * @dest: Parameters
 * @src: Parameters
 * @n: Parameters
 * Return: pointer
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n ; i++)
		dest[i] = src[i];

	return (dest);
}
