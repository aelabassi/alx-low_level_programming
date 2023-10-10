#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - returns the length of a string
 * @c: pointer to char
 * Return: int
*/

int _strlen(char *c)
{
	int i;

	for (i = 0; c[i] != '\0'; i++)
		;

	return (i);
}

/**
 * _strcpy - copies a source string to a destiny string
 * @src: pointer to char
 * @dst: pointer to char
 * Return: copied string
*/
char *_strcpy(char *dst, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dst[i] = src[i];
	}

	dst[i++] = '\0';

	return (dst);
}

/**
 * new_dog - returns new struct of type gog_
 * @name: pointer to char
 * @age: floar
 * @owner: poinrt to char
 * Return: a dog_t type
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int name_len = 0;
	int owner_len = 0;

	if (name != NULL && owner != NULL)
	{
		dog = malloc(sizeof(dog_t));
		if (dog == NULL)
			return (NULL);

		name_len = _strlen(name) + 1;
		owner_len = _strlen(owner) + 1;

		dog->name = malloc(sizeof(char) * name_len);
		if (dog->name == NULL)
		{
			free(dog);
			return (NULL);
		}
		dog->owner = malloc(sizeof(char) * owner_len);
		if (dog->owner == NULL)
		{
			free(dog->name);
			free(dog);
			return (NULL);
		}
		dog->name = _strcpy(dog->name, name);
		dog->owner = _strcpy(dog->owner, owner);
		dog->age = age;
	}

	return (dog);


}
