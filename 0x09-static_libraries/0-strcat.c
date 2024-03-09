#include "main.h"

/**
 * _strcat - appends src to the end of dest
 *
 * @dest: string to be appended to
 * @src: string to be appended
 *
 * Return: a pointer to dest
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
		i++;

	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}
	return (dest);
}
