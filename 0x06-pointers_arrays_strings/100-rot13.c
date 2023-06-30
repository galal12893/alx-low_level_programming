#include "main.h"

/**
 * rot13 - encodes a string using rot13.
 *
 * @str: to be encoded
 *
 * Return: pointer to string
 */

char *rot13(char *str)
{
	int i, j;
	char *s = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *s1 = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; s[j] != '\0'; j++)
		{
			if (str[i] == s[j])
			{
				str[i] = s1[j];
				break;
			}
		}
	}
	return (str);
}

