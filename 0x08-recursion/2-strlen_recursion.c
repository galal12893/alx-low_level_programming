/**
 * _strlen_recursion - calculates length of string recursivley
 * @s: string to find length
 *
 * Return: length of string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + getlen(s + 1));
}