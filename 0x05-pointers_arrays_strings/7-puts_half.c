#include <stdio.h>
#include <string.h>

/**
* puts_half - reset num to 98
* @str: variable
* Return: void
*/

void puts_half(char *str)
{
	int i;
	int len = strlen(str);

	if (len % 2 == 0)
	{
	for (i = 0; i < len / 2; i++)
	{
		putchar(str[i]);
	}
	else
	{
		for (i = 0; i < len - 1 / 2; i++)
		{
			putchar(str[i]);
		}
	}
	}
	putchar('\n');
}
