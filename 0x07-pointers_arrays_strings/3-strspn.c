#include <stdio.h>
#include <string.h>

/**
 * _strspn - string length
 * @s: str
 * @accept: str
 * Return: unsigned int
 */
unsigned int _strspn(char *s, char *accept)
{
	return (strspn(s, accept));
}
