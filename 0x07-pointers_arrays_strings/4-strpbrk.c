#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 *
 * @s: to search in
 * @accept: to search for
 *
 * Return: pointer to the match
 */

char *_strpbrk(char *s, char *accept)
{
	int itr, jtr;
	char *p;

	itr = 0;
	while (s[itr] != '\0')
	{
		jtr = 0;
		while (accept[jtr] != '\0')
		{
			if (accept[jtr] == s[itr])
			{
				p = &s[itr];
				return (p);
			}
			jtr++;
		}
		itr++;
	}
	return (0);
}

