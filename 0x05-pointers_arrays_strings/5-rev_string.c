#include "main.h"

/**
 * rev_string - takes a pointer to a string and reverses the string
 * @s: the string to be reversed
 * Return: nothing
 */

void rev_string(char *s)
{
	int i = 0;
	int j = 0;
	char temp;

	while (s[i])
		i++;
	while (i--)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
		j++;
	}
}
