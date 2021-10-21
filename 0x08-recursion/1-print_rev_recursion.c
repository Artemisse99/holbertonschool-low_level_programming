#include "main.h"
/**
 *_print_rev_recursion - kjkjl
 * @s: Parameters
 * Return: 0
 */
void _print_rev_recursion(char *s)
{

	if (*s)
	{
		_print_rev_recursion(s + 1);
		printf("%c", *s);
	}

}
