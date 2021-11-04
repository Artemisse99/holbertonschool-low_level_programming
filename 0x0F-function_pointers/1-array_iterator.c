#include <stdio.h>
/**
 * array_iterator - search integer
 * @array: array
 * @size: size array
 * @action: pointer to function
 *
 * Return: integer
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (size && array)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
