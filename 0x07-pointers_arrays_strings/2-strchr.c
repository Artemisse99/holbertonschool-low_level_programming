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

	int i = 0;
	while (s[i] != '\0')
	{
		if ( s[i] == c)
		{
			s = &s[i];
			return (s);
		}

		i++;
	}
	return ('\0');
}
