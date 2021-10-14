#include "main.h"
/**
 * _strncat - using first time pointers- concat string
 *@src: Pointers
 *@dest: Parameters pointers
 *@n: Parameters quantity of bytes
*Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	char *concat = dest;
	int c = 0;

	while (*concat != '\0')
	{
		concat++;
	}

	while (*src != '\0')
	{
		concat++;
		src++;
	}
	while (n > c)
	{
		n = c;
	}
	while ((n > 0) && (*src != '\0'))
	{
		*concat = *src;
		n++;
	}

	*concat = '\0';

	return (dest);

}
