#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * containsNonDigits - checks if a string contains non-digit characters
 *
 * @str: string to check
 *
 * Return: 0 if only digits are found, 1 otherwise
 */
int containsNonDigits(const char *str)
{
	while (*str)
	{
		if (!isdigit(*str))
		{
			return (1);
		}
		str++;
	}
	return (0);
}

/**
 * main - adds numbers
 *
 * @argc: count
 * @argv: array
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		if (containsNonDigits(argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);
	return (0);
}

