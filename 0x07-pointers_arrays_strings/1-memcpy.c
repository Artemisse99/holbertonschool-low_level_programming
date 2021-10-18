#include "main.h"
/**
 *_memcpy - kjkjl
 * @dest: Parameters
 * @src: Parameters
 * @n: Parameters
 * Return: 0
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{

	unsigned int i = 0;

	while (i < n){
		dest[i] = *src;
		i++;
		src++;
	}

	return (dest);
}
