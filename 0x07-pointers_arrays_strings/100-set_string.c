#include "main.h"

/**
 * set_string - sets the value of a pointer to a char
 *
 * @s: poiter to pointer
 * @to: pointer to value
 *
 * Return: nothing
 */

void set_string(char **s, char *to)
{
	*s = to;
}
