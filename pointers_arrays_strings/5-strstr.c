#include "main.h"
#include <stdio.h>

/**
 * _strstr - locate a substring
 *
 * @haystack: chaîne de caractère ds laquelle effectuer la recherche
 * @needle: sous-chaîne à rechercher dans la chaîne principale
 *
 * Return: needle or NULL
 */

char *_strstr(char *haystack, char *needle)
{
	int count1;
	int count2;

	for (count1 = 0; haystack[count1]; count1++)
	{
		int a = count1;

		for (count2 = 0; needle[count2]; count2++)
		{
			if (haystack[a] != needle[count2])
			{
				break;
			}
			else
				a++;
		}
		if (!needle[count2])
			return (&haystack[count1]);
	}
	return (NULL);
}

