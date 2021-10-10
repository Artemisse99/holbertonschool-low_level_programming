#include "main.h"

/**
 *print_line  - alphabet lowercase
 *@n: parameter
 *Return: 0
 */

void print_line(int n)
{
	char i = 0;

	while (n > i)
	{
		_putchar('_');
		i++;
	}
	_putchar('\n');
}
