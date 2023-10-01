#include "main.h"

/**
 * _print_rev_recursion -  prints a string, followed by a new line
 * in reverse order.
 * @s: string to print
 *
 * this function prints a string followed by a new line
 *
 * return: void
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);

	_putchar(*s);
}
