#include "main.h"

/**
 * infinite_add - adds two numbers
 *
 * @n1: first number
 * @n2: second number
 * @r: buffer to store the result
 * @size_r: buffer size
 *
 * Return: 0 or the sum
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, j, k, l, m, n, o, p, q, sum, carry, len1, len2;

	i = j = k = l = m = n = o = p = sum = carry = len1 = len2 = 0;
	while (n1[i] != '\0')
		i++;
	while (n2[j] != '\0')
		j++;
	if (i >= j)
		len1 = i;
	else
		len1 = j;
	if (size_r <= len1 + 1)
		return (0);
	r[len1 + 1] = '\0';
	for (k = i - 1, l = j - 1, m = len1; k >= 0 && l >= 0; k--, l--, m--)
	{
		o = n1[k] - '0';
		p = n2[l] - '0';
		sum = o + p + carry;
		if (sum > 9)
		{
			carry = 1;
			sum = sum - 10;
		}
		else
			carry = 0;
		r[m] = sum + '0';
	}
	if (k >= 0)
		n = k;
	else if (l >= 0)
		n = l;
	for (; n >= 0; n--, m--)
	{
		q = n1[n] - '0';
		sum = q + carry;
		if (sum > 9)
		{
			carry = 1;
			sum = sum - 10;
		}
		else
			carry = 0;
		r[m] = sum + '0';
	}
	if (carry == 1)
	{
		if (len1 + 1 >= size_r)
			return (0);
		for (m = len1; m >= 0; m--)
			r[m + 1] = r[m];
		r[0] = '1';
	}
	return (r);
}

