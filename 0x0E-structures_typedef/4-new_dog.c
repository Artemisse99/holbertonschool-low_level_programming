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
dog_t *new_dog(char *name, float age, char *owner)
{
	int i = 0, j = 0;
	dog_t *newDog;

	newDog = malloc(sizeof(dog_t));
	if (newDog == NULL)
		return (NULL);
	while (owner[i] != '\0')
		i++;
	while (name[j] != '\0')
		j++;
	newDog->owner = malloc((i + 1) * sizeof(char));
	newDog->name = malloc((j + 1) * sizeof(char));

	if (newDog->owner == NULL || newDog->name == NULL)
	{
		free(newDog->owner);
		free(newDog->name);
		free(newDog);
		return (NULL);
	}
	i = 0;
	j = 0;
	while (name[i] != '\0')
	{
		newDog->name[i] = name[i];
		i++;
	}
	while (owner[j] != '\0')
	{
		newDog->owner[j] = owner[j];
		j++;
	}
	newDog->name[i] = '\0';
	newDog->owner[j] = '\0';
	newDog->age = age;
	return (newDog);
}
