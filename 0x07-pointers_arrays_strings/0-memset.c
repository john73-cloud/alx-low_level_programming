#include <stdio.h>
#include <string.h>

/**
 * _memset - function
 * @s: var
 * @n: var
 * @b: char
 * Return: char *
 */
char *_memset(char *s, char b, unsigned int n)
{
	return (memset(s, b, n));
}
