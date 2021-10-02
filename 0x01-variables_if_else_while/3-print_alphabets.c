#include <stdio.h>

/**
 * main - print of the alfabet lowercase and uppercase
 * Return: 0
 */

int main(void)
{

	char c;
	char j;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	for (j = 'A'; j <= 'Z'; j++)
	{
		putchar(c);
	}
	putchar('\n');

	return (0);
}
