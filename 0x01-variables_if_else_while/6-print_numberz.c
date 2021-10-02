#include <stdio.h>

/**
 * main - print of the 0-9 with putchar
 * Return: alwais 0
 */

int main(void)
{

	int c;

	for (c = 48; c <= 57; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
