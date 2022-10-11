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
	char *nm, *own;

	nm = malloc(strlen(name) + 1);
	if (nm == NULL)
		return (NULL);
	own = malloc(strlen(owner) + 1);
	if (own == NULL)
		return (NULL);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
	{
		free(nm);
		free(own);
		return (NULL);
	}
	dog->name = malloc(strlen(nm));
	if (dog->name == NULL)
	{
		free(nm);
		free(own);
		free(dog);
		return(NULL);
	}
	dog->owner = malloc(strlen(own));
	if (dog->owner == NULL)
	{
		free(nm);
		free(own);
		free(dog->name);
		free(dog);
		return (NULL);
	}
	strcpy(dog->name, nm);
	strcpy(dog->owner, own);
	dog->age = age;
	return (dog);
}
