#include "main.h"

/**
 * _strcmp - compares two strings
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: 0 if equal. negative number if s1 is smaller. postive otherwise.
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i])
	{
		if (s1[i] != s2[i])
			return ((int) s1[i] - s2[i]);
		i++;
	}
	return (0);
}
