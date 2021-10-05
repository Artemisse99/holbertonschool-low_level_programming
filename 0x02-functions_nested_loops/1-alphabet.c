#include "main.h"

/**
 * print_alphabet - alphabet lowercase
 *
 * Return: 0
 */

void print_alphabet(void)
{
	char i;

	for (i = 97; i <= 122; i++)
	{
		_putchar(i);
	}
	putchar('\n');
}

/**
 * main - using print_alphabet function
 *
 * Return: Alwais (0)
 */

int main(void)
{
	print_alphabet();
	return (0);
}
