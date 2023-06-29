#include "main.h"

/**
 * _strncpy - copies from src to dest
 *
 * @dest: string to be replaced
 * @src: string to be cpoied from
 * @n: number of chars to be printed
 *
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
		i++;

	if (n > i)
		n = i;

	for (j = 0; src[j] != src[n]; j++)
	{
		dest[j] = src[j];
	}

	dest[i] = '\0';
	return (dest);
}
