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
	int len = strlen(s);
	char *str;

	for (i = len - 1; i > -1; i--)
	{
		strncat(str, &s[i], 1);
	}
	s = str;
}

