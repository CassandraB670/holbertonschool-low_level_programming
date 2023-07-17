#ifndef DOG_H
#define DOG_H

/**
 * struct dog - new structure for the dog
 *
 * @name: member for define the dog's name
 *
 * @age: member for define the dog's age
 *
 * @owner: member for define the dog's owner
 *
 * Definition: this structure define name, age and owner for a dog.
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif
