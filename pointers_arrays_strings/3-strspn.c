#include "main.h"
#include <stdio.h>

/**
 * _strspn - get the length of a prefix substring
 *
 * @s: chaîne de caractère à utiliser pour la recherche
 *
 * @accept: liste des caractère accepté
 *
 * Return: number of byte in the initial segment
 */

unsigned int _strspn(char *s, char *accept)
{
	int count1;
	int count2;
	unsigned int resultat = 0;

	for (count1 = 0; s[count1] != '\0'; count1++)
	{
		for (count2 = 0; accept[count2] != '\0'; count2++)
		{
			if (s[count1] == accept[count2])
			{
				resultat += 1;
				break;
			}
		}
		if (accept[count2] == '\0')
			break;
	}
	return (resultat);
}
