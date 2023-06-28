#include "main.h"

/**
 * rev_string - takes a pointer to a string and reverses the string
 * @s: the string to be reversed
 * Return: nothing
 */

void rev_string(char *s)
{
	int i, j;
	char temp;

	i = 0;
	j = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	i = i - 1;

	while (j < i)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
		j++;
		i--;
	}
}
