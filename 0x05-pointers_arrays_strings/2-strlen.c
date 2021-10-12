#include "main.h"
/**
 * _strlen - using first time pointers- update variable
 *@s: Pointers
 *Return: return v
 */
int _strlen(char *s)
{
	int v = 0;

	while (*s != '\0')
	{
		v++;
		s++;
	}

		return (v);
}
