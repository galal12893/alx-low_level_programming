#include "main.h"

/**
 * _isalpha - checks if char is lowercase
 *@c: the char to be checked
 * Return: 1 if lowercase, 0 if upper case
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
