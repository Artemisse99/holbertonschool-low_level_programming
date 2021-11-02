#include <stdio.h>
#include "dog.h"

/**
 * init_dog - function that initialize a variable of type struct dog
 * @d: pointer to dog struct
 */
void print_dog(struct dog *d)
{
	if(d)
	{

		((*d).name == NULL) ? printf("(nil)\n") :  printf("Name: %s\n", ((*d).name));
		((*d).age == 0.0f) ? printf("(nil)\n") :  printf("Age: %f\n", ((*d).age));
		((*d).owner == NULL) ? printf("(nil)\n") :  printf("Owner: %s\n", ((*d).owner));

	}
}
