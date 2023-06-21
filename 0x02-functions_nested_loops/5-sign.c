#include "main.h"

/**
 * print_sign - prints the sign of int
 * @n: the int to be checked
 * Return 1 if + and 0 if -
 */

int print_sign(int n)
{
	if (n < 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n ==0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
