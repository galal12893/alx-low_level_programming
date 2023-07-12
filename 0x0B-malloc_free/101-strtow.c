#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * strtow - splits a string into words.
 *
 * @str: string to split
 *
 * Return: pointer to array of strings or NULL
 */
char **strtow(char *str)
{
	char **array;
	int i, j, k, l, m, n;

	if (str == NULL || *str == '\0')
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		;

	array = malloc(sizeof(char *) * i);
	if (array == NULL)
		return (NULL);

	for (j = 0; j < i; j++)
	{
		if (str[j] == ' ')
		{
			for (k = j; str[k] == ' '; k++)
				;

			array[j] = malloc(sizeof(char) * (k - j + 1));
			if (array[j] == NULL)
			{
				for (l = 0; l < j; l++)
					free(array[l]);
				free(array);
				return (NULL);
			}

			for (m = 0, n = j; str[n] != ' '; m++, n++)
				array[j][m] = str[n];
			array[j][m] = '\0';
		}
	}

	array[j] = NULL;
	return (array);
}

