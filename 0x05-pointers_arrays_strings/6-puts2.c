#include <stdio.h>
#include <string.h>

/**
* puts2 - reset num to 98
* @str: variable
* Return: void
*/

void puts2(char *str)
{
	int i;
	int len = strlen(str);

	if (strcmp(str, "") != 0)
	{
	putchar(str[0]);
	for (i = 1; i < len; i++)
	{
		if (i % 2 == 0)
		{
			putchar(str[i]);
		}
	}
	}
	putchar('\n');
}
