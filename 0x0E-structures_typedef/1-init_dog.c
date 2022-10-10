#include "dog.h"

/**
* init_dog - initializes dog object
* @d: object to be initialize
* @name: name of the dog
* @age: age of the dog
* @owner: name of the owner of the dog
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}