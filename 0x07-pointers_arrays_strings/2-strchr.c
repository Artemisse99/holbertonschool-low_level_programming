#include "main.h"
/**
 *_strchr - kjkjl
 * @c: Parameters
 * @s: Parameters
 * Return: s
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			s = &s[i];
			return (s);
		}


	}
	return (NULL);
}