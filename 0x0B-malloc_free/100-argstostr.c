#include <stdlib.h>
#include "main.h"

/**
 * argstostr - concatenates all the arguments of your program.
 *
 * @ac: count
 * @av: arguments
 *
 * Return: pointer to string or null
 */


char *argstostr(int ac, char **av)
{
	char *str;
	int i, j, k, size;

	if (ac == 0 || av == NULL)
		return (NULL);

	size = 0;

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++, size++)
			;
		size++;
	}

	str = malloc((size + 1) * sizeof(char));

	if (str == NULL)
		return (NULL);

	k = 0;

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++, k++)
			str[k] = av[i][j];

		str[k] = '\n';
		k++;
	}

	str[size] = '\0';

	return (str);
}
