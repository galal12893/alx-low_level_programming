#include "main.h"

/**
 * *_strcpy - copies the string pointed to by src, including the terminatinull
 * byte (\0), to the buffer pointed to by dest
 * @dest: buffer
 * @src: source
 * Return: char
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (*(src + i))
	{
		*(dest + i) = *(src + i);
		i++;
	}

	*(dest + i) = '\0';

	return (dest);
}
