#include "main.h"
#include <stdio.h>

/**
 * _strchr - locate a character in a string
 *
 * @s: chaîne de caractère dans laquelle effectuer la recherche
 * @c: caractère recherché
 *
 * Return: caractère ou NULL
 */

char *_strchr(char *s, char c)
{
	int counter;

	for (counter = 0; s[counter] != '\0'; counter++)
	{
		if (s[counter] == c)
			return (&s[counter]);
	}
	return (NULL);
}
