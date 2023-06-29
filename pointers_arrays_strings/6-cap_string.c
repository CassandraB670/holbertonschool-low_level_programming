#include "main.h"
#include <stdio.h>

/**
 * *cap_string - Capitalize all first letter
 *
 * @str: pointer
 *
 * Return: always 0 (success)
 */

char *cap_string(char *str)
{
	char carspecial[] = " ,;.!?\"(){}\t\n";
	int count1;
	int count2;

	for (count1 = 0; str[count1] != '\0'; count1++)
	{
		if (str[count1] >= 'a' && str[count1] <= 'z')
		{
			if (count1 == 0)
				str[count1] -= 32;
			else
			{
				for (count2 = 0; carspecial[count2] != '\0'; count2++)
				{
					if (str[count1 - 1] == carspecial[count2])
						str[count1] -= 32;
				}
			}
		}
	}
	return (str);
}
