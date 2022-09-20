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
	int b;

	putchar(str[0]);
	for (i = 1; i < len - 1; i++)
	{
		if(i % 2 == 0)
		{
			putchar(str[i]);
		}
	}
	putchar('\n');
}
