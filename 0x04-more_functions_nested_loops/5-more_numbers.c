#include "main.h"

/**
 * more_numbers - numbers 1- 14 x10
 *
 */

void more_numbers(void)
{
	char i;
	int j;

	for (j = 1; j <= 10; j++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i > 9)
			{
				_putchar(i / 10 + '0');
			}

			_putchar(i % 10 + '0');
		}
		_putchar('\n');
	}
}
