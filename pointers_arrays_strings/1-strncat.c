#include "main.h"
#include <stdio.h>

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
