#ifndef DOG_H
#define DOG_H

/**
 * struct dog - New type
 * @name: name of dog
 * @owner: name of owner
 * @age: age of dog
 * Description: new type definition
 */
struct dog
{
	char *name;
	char *owner;
	float age;
};

/**
 * dog_t - new typedef for struct dog
 */
typedef struct dog dog_t;


void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);



#endif
