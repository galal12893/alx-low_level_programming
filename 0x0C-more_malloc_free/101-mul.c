#include <stdlib.h>
#include <stdio.h>

/**
 * main - multiplies 2 numbers
 *
 * @argc: count
 * @argv: array of arguments
 *
 * Return: result
 */

int main(int argc, char *argv[])
{
	int num1, num2, result;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	result = num1 * num2;

	printf("%d\n", result);

	return (0);
}
