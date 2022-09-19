#include <stdio.h>
#include <string.h>

/**
* print_rev - reset num to 98
* @s: variable
* Return: void
*/

void print_rev(char *s)
{
	int len = strlen(s);
	char tmp;
	int i;

	for (i = 0; i < len / 2; i++)
	{
		tmp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = tmp;
	}
	printf("%s", s);
}
