#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * string_nconcat - concat two strings
 * @s1: string one
 * @s2: string two
 * @n: int n
 * Return: char *
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int len = strlen(s1);
	char *m = malloc(sizeof(char) * len + n);

	if (m == NULL)
	{
		return (NULL);
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	strncat(m, s1, len);
	strncat(m, s2, n);
	return (m);
}
