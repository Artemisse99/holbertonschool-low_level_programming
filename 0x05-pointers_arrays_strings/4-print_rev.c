#include "main.h"
#include <string.h>
/**
 * print_rev - using first time pointers- print string reverse
 *@s: Pointers
 *Return: return v
 */
void print_rev(char *s)
{

	int a = 0;

	for (a = 0; s[a] != '\0'; a++)
	{
	}
	for (a = (a - 1); s[a] != '\0' && a >= 0; a--)

	{
		_putchar(s[a]);
	}
	_putchar(10);

}
