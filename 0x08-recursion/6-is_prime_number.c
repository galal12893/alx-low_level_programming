#include "main.h"

/**
 * is_prime_recursive - Check if a number is prime recursively.
 * @n: The number to be checked.
 * @divisor: The current divisor being tested.
 *
 * Return: (1) if n is a prime number, (0) otherwise.
 */
int is_prime_recursive(int n, int divisor)
{
	if (n <= 1)
		return (0);

	if (n <= 3)
		return (1);

	if (n % 2 == 0 || n % 3 == 0)
		return (0);

	if (divisor * divisor > n)
		return (1);

	if (n % divisor == 0 || n % (divisor + 2) == 0)
		return (0);

	return (is_prime_recursive(n, divisor + 6));
}

/**
 * is_prime_number - Check if a number is prime.
 * @n: The number to be checked.
 *
 * Return: (1) if n is a prime number, (0) otherwise.
 */
int is_prime_number(int n)
{
	return (is_prime_recursive(n, 5));
}

