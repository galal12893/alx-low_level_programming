#include "main.h"

/*/
 * _abs - retruns abs value
 * @n: the int to be checked
 * Return: abs(n) is returned
 */

int _abs(int n)
{
	if (n < 0)
		n = (-1) * n;
	return (n);
}
