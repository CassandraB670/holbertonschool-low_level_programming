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
 * *_strncat - Concatenates two strings
 *
 * @dest: destination
 *
 * @src: source
 *
 * @n: variable
 *
 * Return: destination
 */

char *_strncat(char *dest, char *src, int n)
{
	int dest_len = _strlen(dest);
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[dest_len + i] = src[i];
	dest[dest_len + i] = '\0';
	return (dest);
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
 * string_nconcat - concatenates two string
 *
 * @s1: string 1
 *
 * @s2: string 2
 *
 * @n: size
 *
 * Return: concat
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int length_s1;
	unsigned int length_s2;
	char *concat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	length_s1 = _strlen(s1);
	length_s2 = _strlen(s2);

	if (n >= length_s2)
		n = length_s2;

	concat = malloc((length_s1 + n + 1) * sizeof(char));

	if (concat == NULL)
		return (NULL);

	_strcpy(concat, s1);
	_strncat(concat, s2, n);

	return (concat);
}
