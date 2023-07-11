#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates an array of chars and initializes it.
 *
 * @size: size of the array
 * @c: the character to put in
 *
 * Return: pointer to the array or NULL on failure
 */

char *create_array(unsigned int size, char c)
{
	char *ar;
	unsigned int i;

	/* Returns NULL if size = 0 */
	if (size == 0)
		return (NULL);

	ar = malloc(size * sizeof(char));

	if (ar == NULL)
	{
		/* Handle failed memory allocation */
		return (NULL);
	}

	for (i = 0; i < size; i++)
		ar[i] = c;

	return (ar);
}

