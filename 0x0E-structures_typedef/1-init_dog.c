#include "dog.h"
#include <stdio.h>

/**
 * init_dog - initialize the structure dog's attributes
 * @d: struct
 * @name: pointer to char
 * @age: float
 * @owner: pointer to char
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
	    d->age = age;
	    d->owner = owner;
	}

}
