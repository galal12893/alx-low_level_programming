#include <unistd.h>
#include "main.h"

/**
 * _putcahr - writes the character c to the stdout
 * @c: the char to print
 *
 * Return: on sucess 1.
 *	   on error, -1 is returned and errno is set approprialety
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
