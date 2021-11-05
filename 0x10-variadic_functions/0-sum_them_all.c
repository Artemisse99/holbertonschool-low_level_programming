#include <stdlib.h>
#include "function_pointers.h"
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

	int i = 0, sum = 0;

	while (i < n)
	{

		sum + = va_arg(ap, int);
		i++;
	}

	va_end(ap);

	return (sum);
}
