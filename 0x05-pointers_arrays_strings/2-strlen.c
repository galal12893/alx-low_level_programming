#include "main.h"

/**
 * _strlen - returnss the lenght of a string
 * @s: a pointer to the string
 *
 * Return: length of the string
 */

int _strlen(char *s)
{
	int count = 0;

	for (count = 0; *s != '\0'; s++)
		count++;

	return (count);

}
