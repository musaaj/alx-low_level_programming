#include <stdlib.h>
/**
* new_dog - create new dog object
* @name: name of the new dog
* @age: age of the new dog
* @owner: owner of the new dog
* Return: new dog object
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t dog;
	char *nm, *own;

	nm = malloc(strlen(name) + 1);
	if (nm == NULL)
		return (NULL);
	own = malloc(strlen(owner) + 1)
	if (own == NULL)
		return (NULL);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	dog.name = *name;
	dog.owner = *owner;
	dog.age = age;
	return (dog);
}
