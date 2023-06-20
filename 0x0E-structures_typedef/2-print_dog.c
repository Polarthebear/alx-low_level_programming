#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - Main entry point
 * @d: pointer to struct dog
 * Description: Function that prints struct dog
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name != NULL)
	{
		printf("Name: %s\n", d->name);
	}
	else
	{
		printf("Name: (nil)\n");
	}

	if (d->age > 0)
	{
		printf("Age: %f\n", d->age);
	}
	else
	{
		printf("Age: (nil)\n");
	}

	if (d->owner != NULL)
	{
		printf("Owner: %s\n", d->owner);
	}
	else
	{
		printf("Owner: (nil)\n");
	}
}
