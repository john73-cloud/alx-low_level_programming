#include <stdio.h>
#include <string.h>
/**
 * _strncat - concating two strings
 * @dest: destination
 * @src: source
 * @n: number
 * Return: char *
 */
char *_strncat(char *dest, char *src, int n)
{
	char *x = strncat(dest, src, n);

	return (x);
}
