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

	for (i = 0; src[i] != '\0'; i++)
		i++;

	if (n > i)
		n = i;

	for (j = 0; src[n] != src[j]; j++)
		dest[j] = src[j];

	return (dest);

}
