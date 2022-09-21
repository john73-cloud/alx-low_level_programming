#include <stdio.h>
#include <string.h>

/**
* puts_half - reset num to 98
* @str: variable
* Return: void
*/

void puts_half(char *str)
{
	int len = strlen(str);
	int i = len;

	if (len % 2 == 0)
	{
		i = i / 2;
	for (; i < len; i++)
	{
		putchar(str[i]);
	}
	}
	else
	{
		i = i - 1 / 2;
		for (; i < len; i++)
		{
			putchar(str[i]);
		}
	}
	putchar('\n');
}
