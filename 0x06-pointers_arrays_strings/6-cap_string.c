#include <stdio.h>
#include <ctype.h>
#include <string.h>
/**
 * cap_string - function
 * @s: char
 * Return: char *
 */
char *cap_string(char *s)
{
	int len = strlen(s);
	int i;
	int i2;
	char sep[13] = {'\n', ' ', '	', ',', ';',
		'.', '!', '?', '\"', '(', ')', '{', '}'};

	for (i = 0; i < len; i++)
	{
		for (i2 = 0; i2 < 20; i2++)
		{
			if (s[i] == sep[i2])
			{
				s[i + 1] = toupper(s[i + 1]);
			}
		}
	}
	return (s);
}
