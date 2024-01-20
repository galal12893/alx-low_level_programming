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

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
return (sqrt_check(n, 0));
}
