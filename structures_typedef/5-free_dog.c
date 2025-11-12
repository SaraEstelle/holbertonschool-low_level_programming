#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - free the memory allocated to dog
 * @d: pointer to the structure to free
 *
 * Description: free first the inside elements,
 * then the principale structure
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->name);
	free(d->owner);
	free(d);
}
