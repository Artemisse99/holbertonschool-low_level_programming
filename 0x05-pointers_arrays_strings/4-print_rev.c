#include "main.h"
#include <string.h>
/**
 * print_rev - using first time pointers- print string reverse
 *@s: Pointers
 *Return: return v
 */
void print_rev(char *s)
{
	int a;
	int b;

	b = strlen(s);

	for (a = b; a >= 0; a--)
	{
		putchar(s[a]);
	}
	putchar('\n');

}
