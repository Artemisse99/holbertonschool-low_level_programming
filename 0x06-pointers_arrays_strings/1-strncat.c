#include "main.h"
/**
 * _strcat - using first time pointers- concat string
 *@src: Pointers
 *@dest: Parameters pointers
 *Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	char *concat = dest;

	while (*concat != '\0')
	{
		concat++;
	}

	while (*src != '\0')
	{
		concat++;
		src++;
	}
	n > c ? n = c;
	while ((n > 0 ) && (*src != '\0'))
	{
		*concat = *src;
		n++;
	}

	*concat= '\0';

	return (dest);

}
