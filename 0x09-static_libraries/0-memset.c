#include "main.h"

/**
 * _memset  -  fills the first n bytes of the memory area pointed to by s
 *with the constant byte b
 *
 * @s: pointer to the first adress of the memory location
 * @b: the constant to be filled
 * @n: the number of memory places to replace
 *
 * Return: pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(s + i) = b;
	return (s);
}
