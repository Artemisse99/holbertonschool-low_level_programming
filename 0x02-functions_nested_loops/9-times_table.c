#include "main.h"

/**
 * times_table - Entry Point
 * i: I
 * a: A
 * c: C
 * Return: table of the 9
 */

void times_table(void)
{
int i = 0;
int a = 0;
int c = 0;

for (i = 0; i <= 9; i++)
{
for (a = 0; a <= 9; a++)
{
c = i * a;
if (a == 0)
{
_putchar(c + '0');
}

else if (c <= 9)

{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar(c + '0');
}

else if (c >= 10)
{
_putchar(',');
_putchar(' ');
_putchar((c / 10) + '0');
_putchar(c % 10 + '0');
}
}
_putchar('\n');
}
}
