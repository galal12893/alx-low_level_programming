#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings.
 *
 * @s1: string 1
 * @s2: string 2
 * @n: then umber of bytes to include from string 2
 *
 * Return: a pointer to the allocated memory
 * if the function fails, it should return NULL
 * If n is greater or equal to the length of s2 then use the entire string s2
 * if NULL is passed, treat it as an empty string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, num, k, l;
	char *ptr;

	/*if NULL is passed, treat it as an empty string*/
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/*length of s1 and s2*/
	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;

	/*If n is greater or equal to the length of s2 then use the entire string s2*/
	if (n >= j)
		num = j;
	else
		num = n;

	/*memory allocation*/
	ptr = malloc(i + num + 1);
	/*If the function fails, it should return NULL*/
	if (ptr == NULL)
		return (NULL);

	/*putting s1*/
	for (k = 0; k < i; k++)
		ptr[k] = s1[k];
	/*putting s2*/
	for (l = 0; l < num; l++)
		ptr[k + l] = s2[l];

	ptr[k + l] = '\0';
	return (ptr);
}
