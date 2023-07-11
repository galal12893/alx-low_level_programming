#include <stdlib.h>
#include "main.h"

/**
 * str_concat - concatenates two strings.
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: Null or pointer to new array
 */

char *str_concat(char *s1, char *s2)
{
	char *ar;
	int i, j, k, l;

	/* if s1 or s2 is NULL, treat as empty string */
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/* Find length of s1 */
	for (j = 0; s1[j] != '\0'; j++)
		;
	/* Find length of s2 */
	for (k = 0; s2[k] != '\0'; k++)
		;

	/* Allocate memory for new array */
	ar = (char *)malloc((j + k + 1) * sizeof(char));
	if (ar == NULL)
		return (NULL);

	/* Assign s1 and s2 to new array */
	for (i = 0; i < j; i++)
		ar[i] = s1[i];

	for (l = 0; l < k; i++, l++)
		ar[i] = s2[l];

	ar[i] = '\0';

	return (ar);
}
