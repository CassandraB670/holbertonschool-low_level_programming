#include "main.h"

/**
 * *_strcat - Concatenate two strings
 *
 * @dest: destination
 *
 * @src: source
 *
 * Return: destination
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
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
 * str_concat - Function that concatenates two strings
 *
 * @s1: string 1
 *
 * @s2: string 2
 *
 * Return: NULL or string concatenate
 */

char *str_concat(char *s1, char *s2)
{
	int length_s1;
	int length_s2;
	char *concat;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	length_s1 = _strlen(s1);
	length_s2 = _strlen(s2);
	concat = (char *)malloc((length_s1 + length_s2 + 1) * sizeof(char));

	if (concat == NULL)
		return (NULL);

	_strcpy(concat, s1);

	_strcat(concat, s2);

	return (concat);
}
