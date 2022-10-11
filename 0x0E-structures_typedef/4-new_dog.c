#include <stdlib.h>
#include <string.h>
#include "dog.h"
/**
* new_dog - create new dog object
* @name: name of the new dog
* @age: age of the new dog
* @owner: owner of the new dog
* Return: new dog object
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	dog = malloc(sizeof(dog) + strlen(name) + strlen(owner));
	if (dog == NULL)
		return (NULL);
	dog->name = name;
	dog->owner =  owner;
	dog->age = age;
	return (dog);
}
