#include "main.h"

/**
 * _islower - checks if char is lowercase
 *@c: the char to be checked
 * Return: 1 if lowercase, 0 if upper case
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}
