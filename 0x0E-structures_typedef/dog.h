#ifndef _DOG_H_
#define _DOG_H_
#define dog_t struct dog
/**
 * struct dog - it defines a new type struct dog.
 * @name: Dog's name.
 * @age: Dog's age.
 * @owner: Dog's owner.
 *
 * Description: Longer description
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
