#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - main entry point
 * @d: variable to be intialized
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Description: function initializing type 'struct dog'
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
