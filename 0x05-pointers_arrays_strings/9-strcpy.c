#include "main.h"
/**
 * _strcpy - using first time pointers- print string
 *@src: Pointers
 *@dest: Parameters pointers
 */
char *_strcpy(char *dest, char *src)
{
	int a;

	for (a = 0; src[a] != '\0'; a++)
	{
		dest[a] = src[a];
	}
	dest[a] = '\0';
	return(dest);
}
