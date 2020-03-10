#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - a function that creates a new dog.
 * @name: name of the dog.
 * @age: age of the dog.
 * @owner: dog's owner.
 * Return: an adress to the new dog data.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *user;

user = malloc(sizeof(dog_t));
if (user == NULL)
	return (NULL);
user->name = name;
user->age = age;
user->owner = owner;
return (user);
}
