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
	int i = 0, j = 0, k = 0, l = 0, f = 0, s = 0, d = 0;
	int n1_len = strlen(n1);
	int n2_len = strlen(n2);

	l = n1_len > n2_len ? n1_len : n2_len;
	if (l + 1 > size_r)
	{
		return (NULL);
	}

	for (k = l - 1; k >= 0; k--)
	{
		i = n1_len - 1 - k;
		j = n2_len - 1 - k;
		f = i >= 0 ? n1[i] - '0' : 0;
		s = j >= 0 ? n2[j] - '0' : 0;
		r[k] = (f + s + d) % 10 + '0';
		d = (f + s + d) / 10;
	}

	if (d == 1)
	{
		r[l] = '1';
		l++;
		if (l + 1 > size_r)
		{
			return (NULL);
		}
	}

	r[l] = '\0';
	return (r);
}
