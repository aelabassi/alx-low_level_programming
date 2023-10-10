#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_dog - print the attributes of struct dog
 * @d: struct
*/

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL)
		{
			printf("Name: (nil)\n");
		}
		else if (d->owner == NULL)
		{
			printf("Owner: (nil)\n");
		}
		else if (d->age == 0)
		{
			printf("Age: 0");
		}
		else
		{
			printf("Name: %s\n", d->name);
			printf("Age: %f\n", d->age);
			printf("Owner: %d\n", d->owner);
		}
	}
}
