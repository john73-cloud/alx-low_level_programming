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
	char str[len];

	for (i = len - 1; i > -1; i--)
	{
		strcat(str, s[i]);
	}
	s = str;
}

