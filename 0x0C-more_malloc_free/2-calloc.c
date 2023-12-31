#include <stdlib.h>

/**
 *_calloc - allocates memory for array of nmemb elements of size bytes each
 *
 * @nmemb: number of elements
 * @size: size of each element
 *
 * Return: a pointer to the allocated memory
 *
 * The memory is set to zero (initialized)
 * If nmemb or size is 0, then _calloc returns NULL
 * If malloc fails, then _calloc returns NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < nmemb * size; i++)
		ptr[i] = 0;

	return (ptr);
}
