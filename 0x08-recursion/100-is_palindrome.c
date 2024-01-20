#include "main.h"

/**
 * check_pal - recursively checks if a string is a palindrome
 * @s: the string to check
 * @start: starting index
 * @end: ending index
 * Return: 1 if palindrome, 0 otherwise
 */
int check_pal(char *s, int start, int end)
{
	if (start >= end)
		return (1);
	if (s[start] != s[end])
		return (0);
	return (check_pal(s, start + 1, end - 1));
}

/**
 * _strlen_recursion - finds the length of a string recursively
 * @s: the string to check
 * Return: the length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: the string to check
 * Return: 1 if string is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	int len = 0;
	
	len = _strlen_recursion(s);

	return (check_pal(s, 0, len - 1));
}

