#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates an array of chars, and initializes it.
 *
 * @size: size of array
 * @c: the char to put in
 *
 * Return: Null or pointer to array
 */

char *create_array(unsigned int size, char c)
{
	char *ar;
	unsigned int i;

	/*Returns NULL if size = 0*/
	if (size == 0)
		return (NULL);

	ar = (char *)malloc(size * sizeof(char));

	for (i = 0; i < size; i++)
		ar[i] = c;

	if (ar[0] == c)
		return (ar);
	else
		return (NULL);

}
