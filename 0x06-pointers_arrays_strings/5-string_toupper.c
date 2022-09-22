#include <stdio.h>
#include <ctype.h>
#include <string.h>
/**
 * string_toupper - function
 * @s: char
 * Return: char *
 */
char *string_toupper(char *s)
{
	int len = strlen(s);
	int i;

	for (i = 0; i < len; i++)
	{
		s[i] = toupper(s[i]);
	}
	return (s);
}
