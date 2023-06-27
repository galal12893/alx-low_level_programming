#include "main.h"

/**
 * swap_int - swaps two integers
 * @a: pointer to int a
 * @b: pointer to int b
 * Return: norhing
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
