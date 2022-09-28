#include <stdio.h>
#include <string.h>

/**
 * _print_rev_recursion - string length
 * @s: str
 * Return: unsigned int
 */
void _print_rev_recursion(char *s)
{
	int len = strlen(s);
	int i;

	for (i = len; i > 0; i--)
	{
		putchar(s[i]);
	}
}
