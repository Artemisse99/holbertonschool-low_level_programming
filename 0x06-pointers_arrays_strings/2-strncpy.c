#include "main.h"
/**
 * _strncpy - using first time pointers- copy string
 *@src: Pointers
 *@dest: Parameters pointers
 *@n: Parameters quantity of bytes
 *Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int a = 0, b = 0;

	while (src[b])
	{
		b++;
	}

	while (a < n && src[a])
	{
		dest[a] = src[a];
		a++;
	}

	while (a < n)
	{
		dest[a] = '\0';
		a++;
	}

	return (dest);
}
