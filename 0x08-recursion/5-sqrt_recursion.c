/**
 * sqrt_check - recursively checks for the square root of a number
 * @n: the number to find the square root of
 * @i: the current number to test for being the square root
 *
 * Description: This helper function is called by _sqrt_recursion.
 * It recursively increases `i` to find the natural square root of `n`.
 * If `i * i` is greater than `n`, -1 is returned.
 * Return: the natural square root of `n`, or -1 if it doesn't exist
 */



int sqrt_check(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (sqrt_check(n, i + 1));
}

/**
 * _sqrt_recursion - finds the natural square root of a number
 * @n: the number to calculate the square root of
 *
 * Description: This function finds the natural square root of `n`.
 * It uses a helper function `sqrt_check` to perform the calculation.
 * If `n` is less than 0, -1 is returned.
 * Return: the natural square root of `n`, or -1 if it doesn't exist
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
return (sqrt_check(n, 0));
}
