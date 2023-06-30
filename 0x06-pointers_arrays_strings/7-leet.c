#include "main.h"

/**
 * leet - encodes a string into 1337.
 * Letters a and A should be replaced by 4
 * Letters e and E should be replaced by 3
 * Letters o and O should be replaced by 0
 * Letters t and T should be replaced by 7
 * Letters l and L should be replaced by 1
 * @str: string to be replaced
 * Retrun: the changed string
 */

char *leet(char *str)
{
	int i, j;
	char *s = "aAeEoOtTlL";
	char *s1 = "4433007711";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; s[j] != '\0'; j++)
		{
			if (str[i] == s[j])
			{
				str[i] = s1[j];
			}
		}
	}
	return (str);
}
