#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_all - function to print all inputs
 * @format: const pointer to functionof type char
 * Return: always successful
 */
void print_all(const char * const format, ...)
{
	int i, j;
	va_list arg;
	char *seperator;

	pt types[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string},
		{NULL, NULL}
	};

	va_start(arg, format);

	i = 0;
	seperator = "";
	while (format && format[i])
	{
		j = 0;
		while (types[j].test != NULL)
		{
			if (format[i] == types[j].test[0])
			{
				printf("%s", seperator);
				types[j].printer(arg);
				seperator = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(arg);
}
