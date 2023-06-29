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
	if (s1 == s2)
		return (0);
	else
		return (s1 - s2);
}
