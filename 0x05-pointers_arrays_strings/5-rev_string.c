#include <stdio.h>
#include <string.h>

/**
* rev_string - reset num to 98
* @s: variable
* Return: void
*/

void rev_string(char *s)
{
	int i;
	char *g;
	int len = strlen(s);
	char *str;

	for (i = len - 1; i > -1; i--)
	{
		g = &s[i];
		strncat(str, g, 1);
	}
	s = str;
}

