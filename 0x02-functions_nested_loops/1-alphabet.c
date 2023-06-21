#include "main.h"
/**
 * main - prints_putchar
 * Return: always 0
 */

void print_alphabet(void)
{
	for (char c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
