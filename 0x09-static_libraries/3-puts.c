#include "main.h"

/**
 * _puts - prints the string to stdout
 *
 * @str: the wstr to print
 *
 * Return: nothing
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str + 0);
		str++;
	}
	_putchar('\n');
}
