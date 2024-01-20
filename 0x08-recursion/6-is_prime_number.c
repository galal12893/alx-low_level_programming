#include "main.h"
/**
 * is_prime_number - checks if int is prime
 *
 * @n: the number to check
 *
 * Return: 1 if prime 0 if not
 */

int is_prime_number(int n)
{
	int i = 0;
	if (n <= 1)
	{
		return (0);
	}

	if (n <= 3)
	{
		return (1);
	}

	if (n % 2 == 0 || n % 3 == 0)
	{
		return (0);
	}

	for (i = 5; i * i <= n; i += 6)
	{
		if (n % i == 0 || n % (i + 2) == 0)
		{
			return (0);
		}
	}

	return 1;
}
