#include "main.h"

/**
 * print_numbers - check if c is upper
 *
 * Return: always 0
 */

void print_numbers(void)
{
	int num = 0;

	do {
		_putcchar(num + 48);
		num++;
	} while (num >= 0 && num <=9);
	_putchar('\n');
}
