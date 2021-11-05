#include <stdlib.h>
#include "variadic_functions.h"
/**
 * sum_them_all - function that returns the sum of all its parameters.
 * @n: Elements.
 * @...: parameter indef.
 * Return: ap.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;

	va_start(ap, n);

	unsigned int i = 0;
	int sum = 0;

	while (i < n)
	{

		sum += va_arg(ap, int);
		i++;
	}

	va_end(ap);

	return (sum);
}
