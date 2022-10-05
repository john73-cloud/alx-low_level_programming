#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * str_concat - concating two strings manually
 * @s1: first string
 * @s2: second one
 * Return: char *
 */
char *str_concat(char *s1, char *s2)
{
	int len1 = strlen(s1);
	int len2 = strlen(s2);
	char *str;
	int twolen = len1 + len2;
	int i;
	int i2;

	if (s1 == NULL || s2 == NULL)
	{
		return (NULL);
	}
	if (s1 == "")
	{
		len1 = 0;
	}
	if (s2 == "")
	{
		len2 = 0;
	}
	str = malloc(sizeof(char *) * len1 + len2);

	for (i = 0; i < len1; i++)
	{
		str[i] = s1[i];
	}
	for (i2 = 0; i2 < twolen - len1; i++)
	{
		str[i2] = s2[i2];
	}
	return (str);
}
