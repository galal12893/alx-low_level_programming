#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: the string to be printed
 * Return: nothing
 */

void print_rev(char *s)
{
	int i;
	int count;

	for (count = 0; *s != '\0'; s++)
		count++;

	i = count;

	while (i >= *s)
	{
		_putchar(*s[i] + 0);
		i--;
	}
	_putchar('\n');
}
