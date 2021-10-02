#include <stdio.h>

/**
 * main - print of the alfabet lowercase
 * Return: alwais 0
 */

int main(void)
{

	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c != 'e' && c != 'q')
		putchar(c);
	}
	putchar('\n');
	return (0);
}
