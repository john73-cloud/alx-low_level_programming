#include <stdio.h>
#include <string.h>

/**
 * _memcpy - function
 * @dest: var
 * @n: var
 * @src: char
 * Return: char *
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	return (memcpy(dest, src, n));
}
