#include <stdio.h>
#include "dog.h"

/**
 * print_dog - function that prints informations of the structure dog
 * @d: pointer to the structure to print
 *
 * Description: if an element of d is NULL print (nil),
 * if d is NULL do nothing
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name == NULL)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", d->name);

	printf("Age: %f\n", d->age);

	if (d->owner == NULL)
		printf("Owner: (nil)\n");
	else
		printf("Owner: %s\n", d->owner);
}
