#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - main entry point
 * @str: string
 * Return: string length
 */
int _strlen(const char *str)
{
	int len = 0;

	while (*str++)
		len++;
	return (len);
}

/**
 * _strcpy - main entry point
 * @src: source
 * @dest: destination
 * Return: dest where it was copied
 */
char *_strcpy(char *dest char *src)
{
	int i;

	for (i = 0; src[i]; i++)
		dest[i] = src[i];
	dest[i] = '\0';

	return (dest);
}

/**
 * new_dog - Main entry point
 * @name: name of dog
 * @age: age of dog
 * @owner: name of owner
 * Return: struct *dog NULL if fail
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	if (!name || age < 0 || !owner)
		return (NULL);

	dog = (dog_t *) malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if ((*dog).name == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if ((*dog).owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}

	dog->name = _strcpy(dog->name, name);
	dog->age = age;
	dog->owner = _strcpy(dog->owner, owner);

	return (dog);
}
