#include <stdio.h>
#include <string.h>
/**
 * _strncpy - concating two strings
 * @dest: destination
 * @src: source
 * @n: int
 * Return: char *
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *x = strncpy(dest, src, n);

	return (x);
}
