#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - function that prints a name.
 * @name: char type
 * @f: float type
 * Return: return pointer to struct
 */
void print_name(char *name, void (*f)(char *))
{
	f == NULL ? : f(name);
}
