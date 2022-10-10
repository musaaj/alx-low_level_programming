#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
* print_dog - print info of a dog object
* @d: dog object
*/
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	printf("Name: %s\nAge: %.6f\nOwner: %s\n", d->name, d->age, d->owner);
}
