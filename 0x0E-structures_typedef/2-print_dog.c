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
		printf("Name: %s\n", (d->name) ? d->name : "(nil)");
		printf("Age: %f\n", (d->age) ? d->age : 0);
		printf("Owner: %s\n", (d->owner) ? d->owner : "(nil)");
	}
}
