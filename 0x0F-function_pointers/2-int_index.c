#include <stdio.h>
/**
 * int_index - comparar
 * @array: array
 * @size: size array
 * @cmp: pointer to function
 *
 * Return: integer
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (cmp && array)
	{
		if (size <= 0)
		{
			return (-1);
		}
		while (i < size)
		{
			if (cmp(array[i]))
			{
				return (i);
			}
			i++;
		}
	}
	return (-1);
}
