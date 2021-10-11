#include "main.h"
/**
 * swap_int - using first time pointers- update variable
 *@a: Pointers
 *@b: Pointers
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
