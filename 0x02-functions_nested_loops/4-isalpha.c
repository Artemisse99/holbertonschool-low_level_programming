#include "main.h"

/**
 * _isalpha - print if lowercase
 *
 * @c: The character to print
 *
 * Return: using two
 */
int _isalpha(int c)
{

	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 89))
	{
		return (1);
	}

	else
	{
		return (0);
	}
}
