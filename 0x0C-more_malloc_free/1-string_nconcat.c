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
	int nm = (int) n;
	int len = strlen(s1);
	char *m = malloc(sizeof(char) * len + n);
	char *t = malloc(n);
	int i;

	if (m == NULL)
	{
		return (NULL);
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (i = 0; i < nm; i++)
	{
		t[i] = s2[i];
	}
	strcat(m, s1);
	strcat(m, t);
	return (m);
}
