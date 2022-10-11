#include "dog.h"
#include <stdlib.h>
#include <string.h>
/**
* init_dog - initializes dog object
* @d: object to be initialize
* @name: name of the dog
* @age: age of the dog
* @owner: name of the owner of the dog
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	char *tname, *towner;

	if (d == NULL)
		return;
	if (name == NULL)
		return;
	if (owner == NULL)
		return;
	tname = malloc(strlen(name));
	if (tname == NULL)
		return;
	towner = malloc(strlen(owner));
	if (towner == NULL)
	{
		free(tname);
		return;
	}
	if (d == NULL)
		return;
	d->name = tname;
	d->age = age;
	d->owner = towner;
	free(tname);
	free(towner);
}
