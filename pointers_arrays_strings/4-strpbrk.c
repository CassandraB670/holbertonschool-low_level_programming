#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - Serch a string for any of a set of bytes
 *
 * @s: chaîne de caractères ds laquelle effectuer la recherche
 *
 * @accept: chaîne de caractères contenant les caractères recherchés
 *
 * Return: pointer to the byte in s or NULL
 */

char *_strpbrk(char *s, char *accept)
{
	int count1;
	int count2;

	for (count1 = 0; s[count1] != '\0'; count1++)
	{
		for (count2 = 0; accept[count2] != '\0'; count2++)
		{
			if (s[count1] == accept[count2])
			{
				return (&s[count1]);
			}
		}
	}
	return (NULL);
}
