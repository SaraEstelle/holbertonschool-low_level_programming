#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initialize a variable of  of type struct dog
 * @d: pointer to the structure to initialize
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner:the owner of the dog
 *
 * Description: This fonction asseing the variable to the
 * champs of an exist dog structure
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
