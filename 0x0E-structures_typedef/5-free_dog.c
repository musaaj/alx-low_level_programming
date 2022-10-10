#include <stdlib.h>
#include "dog.h"
/**
* free_dog - destroy a dog object
* @d: dog object
*/
void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
