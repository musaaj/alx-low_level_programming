#ifndef DOG_H
#define DOG_H
/**
* struct dog - hold info about dogs
* @age: age of a particular dog
* @name: name of a particular dog
* @owner: name of a particular dog owner
*/
struct dog
{
	float age;
	char *name;
	char *owner;
};
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
int _strlen(char *s);
void _strcpy(char *d, char *s);
#endif
