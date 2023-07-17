#include "dog.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

/**
 * _strlen - function that returns the length of a string
 *
 * @s: pointer
 *
 * Return: len
 */

int _strlen(char *s)
{
	int len;

	for (len = 0; *s != '\0'; s++)
		len++;
	return (len);
}

/**
 * *_strcpy - copies the string pointed to the buffer pointed
 *
 * @dest: pointer
 *
 * @src: pointer
 *
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i++] = '\0';
	return (dest);
}

/**
 * new_dog - Create a new dog
 *
 * @name: dog's name
 *
 * @age: dog's age
 *
 * @owner: dog's owner
 *
 * Return: NULL if fails or pointer to the new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *name_copy;
	char *owner_copy;
	int name_length;
	int owner_length;

	name_length = _strlen(name);
	owner_length = _strlen(owner);

	new_dog = malloc(sizeof(dog_t));

	if (new_dog == NULL)
		return (NULL);

	name_copy = malloc(sizeof(char) * (name_length + 1));
	owner_copy = malloc(sizeof(char) * (owner_length + 1));

	if (name_copy == NULL || owner_copy == NULL)
	{
		free(new_dog);
		free(name_copy);
		free(owner_copy);
		return (NULL);
	}

	_strcpy(name_copy, name);
	_strcpy(owner_copy, owner);

	new_dog->name = name_copy;
	new_dog->age = age;
	new_dog->owner = owner_copy;

	return (new_dog);
}
