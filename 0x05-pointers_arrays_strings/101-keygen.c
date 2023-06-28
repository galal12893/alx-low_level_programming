#include "main.h"

/**
 * main - Entry point
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	char password[100];
	int i, sum, n;

	sum = 0;
	srand(time(NULL));

	for (i = 0; sum < 2772 - 122; i++)
	{
		n = rand() % 122;
		if (n > 32)
		{
			password[i] = n;
			sum += password[i];
		}
	}
	n = 2772 - sum;
	password[i] = n;
	printf("%s", password);
	return (0);
}
