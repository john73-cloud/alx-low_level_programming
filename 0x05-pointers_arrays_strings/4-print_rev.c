#include <stdio.h>
#include <string.h>

/**
* print_rev - reset num to 98
* @s: variable
* Return: void
*/

void print_rev(char *s)
{
	int i;
	int len = strlen(s);

	for(i = len -1; i > -1; i--)
	{
		putchar(s[i]);
	}
	printf ("\n");
}

