#include <stdio.h>
#include "dog.h"

/**
 * init_dog - function that initialize a variable of type struct dog
 * @d: pointer to dog struct
 * @name: char type
 * @age: float type
 * @owner: char type
 * Return: return pointer to struct
 */
void free_dog(dog_t *d)
{

	if (d)
	{
		free((*d).name);
		free((*d).age);
		free((*d).owner);
	}

}
