#include <stdio.h>

/**
 * main - prints alphabet
 * Return: always 0
 */

int main(void)
{
	char ch;
	
	for(ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	
	return (0);
}
