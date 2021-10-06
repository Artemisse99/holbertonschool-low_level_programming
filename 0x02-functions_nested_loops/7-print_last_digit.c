#include "main.h"

/**
 * print_last_digit - print if lowercase
 *
 * @n: The character to print
 *
 * Return: using two
 */
int print_last_digit(int n)
{

	n = n % 10;

	(n < 0) ? _putchar(-n + '0') : _putchar(n + '0');

	return (-n);
	return (n);
}
