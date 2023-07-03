#include "main.h"

/**
 * _strchr - locates a character in a string
 *
 * @s: string to search in
 * @c: character to locate
 *
 * Return: pointer to the 1st occurance of c or null if not found
 */

char *_strchr(char *s, char c)
{
	while (*s != c)
		s++;

	if (*s == c)
		return (s);
	else
		return (NULL);
}
