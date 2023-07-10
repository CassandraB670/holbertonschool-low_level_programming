#include "main.h"

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
 * _strdup - returns a pointer to a newly allocated space in memory
 *
 * @str: pointer
 *
 * Return: NULL if str = NULL or if insufficient memmory, a pointer otherwise
 */

char *_strdup(char *str)
{
	int length;
	char *copy;

	if (str == NULL)
		return (NULL);

	length = _strlen(str);
	copy = (char *)malloc((length + 1) * sizeof(char));

	if (copy == NULL)
		return (NULL);

	_strcpy(copy, str);

	return (copy);
}
