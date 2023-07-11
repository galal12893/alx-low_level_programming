#include <stdlib.h>
#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 *
 * @str: old array
 * Return: Null or pointer to new array
 */

char *_strdup(char *str)
{
	char *ar;
	int i, j;

	/*Returns NULL if str = NULL*/
	if (str == NULL)
		return (NULL);
	/*Find length of str*/
	for (j = 0; str[j] != '\0'; j++)
		;
	/*allocate memory for new array*/
	ar = (char *)malloc((j + 1) * sizeof(char));
	/*check malloc faliure*/
	if (ar == NULL)
		return (NULL);
	/*assign str to new array*/
	for (i = 0; i < j; i++)
		ar[i] = str[i];

	return (ar);
}
