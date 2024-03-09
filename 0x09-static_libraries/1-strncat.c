#include "main.h"

/**
 * _strncat - appends src to the end of dest
 *
 * @dest: string to be appended to
 * @src: string to be appended from
 * @n: number of chars to be printed
 * Return: a pointer to dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j, k;

	for (i = 0; dest[i] != '\0'; i++)
		i++;

	for (k = 0; src[k] != '\0'; k++)
		k++;

	if (n > k)
		n = k;

	for (j = 0; src[j] != src[n]; j++)
	{
		dest[i] = src[j];
		i++;
	}
	return (dest);
}
