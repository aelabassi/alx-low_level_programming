#ifndef DOG_H
#define DOG_H

/**
 * struct dog - dog id
 * @name: pointer to char
 * @age: float
 * @owner: pointer to char
*/
struct dog
{
	char *name;
	float age;
	char *owner;
} dog;


void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
