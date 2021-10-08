#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - hasta el 98
 * @n: parameter
 * Return: 0
 */

void print_to_98(int n)
{
int b;
if (n > 98)
{
for (b = n; b > 97; b--)
{
printf("%d", b);
if (b != 98)
{
printf(", ");
}
}
}
else
{
for (b = n; b < 99; b++)
{
printf("%d", b);
if (b != 98)
{
printf(", ");
}
}
}
printf("\n");
}
