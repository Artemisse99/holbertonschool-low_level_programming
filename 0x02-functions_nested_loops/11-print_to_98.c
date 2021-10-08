#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - hasta el 98
 * @n: parameter
 * Return: 0
 */

void print_to_98(int n)
{
int i;
for (i = 0; i <= n ; i++)
{
if (i <= 98)
{
printf("%d", i);
printf(" ");
}
}
printf("\n");
}
