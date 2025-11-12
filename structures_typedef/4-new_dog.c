#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - calculate the lenth of a string
 * @s: the string to calculate the lenth
 * Return: the lenth of the string
 *
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	return (i);
}

/**
 * _strcpy - copy of a string inside another
 * @dest: the destination of the copy
 * @src: the source string
 * Return: the pointer to the copied string dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}

/**
 * new_dog - create a new dog
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 *
 * Return: pointer to the new structure or NULL if function fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);

	d->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}
	_strcpy(d->name, name);

	d->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (d->owner == NULL)
	{

		free(d->name);
		free(d);
		return (NULL);
	}
	_strcpy(d->owner, owner);

	d->age = age;
	return (d);
}
