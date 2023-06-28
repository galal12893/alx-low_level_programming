#include "main.h"

/**
 * puts_half - prints the second half of a string
 * @str: the string to be printed
 * Return: nothing
 */

void puts_half(char *str)
{
	int i, j, len;

	for (i = 0; str[i] != '\0'; i++)
	{
		len++;
	}
	if (len % 2 == 0)
	{
		for (j = len / 2; j < len; j++)
		{
			_putchar(str[j]);
		}
	}
	else
	{
		for (j = (len - 1) / 2; j < len; j++)
		{
			_putchar(str[j]);
		}
	}
	_putchar('\n');
}
