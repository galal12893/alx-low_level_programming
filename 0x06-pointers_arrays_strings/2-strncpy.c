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
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
