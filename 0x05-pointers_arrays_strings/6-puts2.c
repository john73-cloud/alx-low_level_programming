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

	putchar(str[-1]);
	for (i = 0; i < len - 1; i++)
	{
		if (i % 2 == 0)
		{
			putchar(str[i]);
		}
	}
	putchar('\n');
}
