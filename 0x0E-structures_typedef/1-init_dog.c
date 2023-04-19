#include "dog.h"

/**
 * init_dog - initializes the dog
 *
 * @d: d for dog
 *
 * @name: name
 *
 * @age: age
 *
 * @owner: owner
 *
 * Return: always 0
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
