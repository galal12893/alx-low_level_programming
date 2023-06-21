#include "main.h"

/**
 * _islower - checks if char is lowercase
 *
 * Return: 1 if lowercase.
 * 	   0 if upper case
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}
