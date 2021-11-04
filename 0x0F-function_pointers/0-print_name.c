#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - function that prints a name.
 * @name: char type
 * @f: float type
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{

	if (f == NULL || name == NULL)
	{
		return;
	}

	f(name);
}
