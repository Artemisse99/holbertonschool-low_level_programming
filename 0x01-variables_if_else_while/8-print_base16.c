#include <stdio.h>

/**
 * main - print of the alfabet lowercase and uppercase
 * Return: 0
 */

int main(void)
{

	int c;
	char j;

	for (c = 48; c <= 57; c++)
	{
		putchar(c);
	}
	for (j = 'a'; j <= 'f'; j++)
	{
		putchar(j);
	}
	putchar('\n');

	return (0);
}
