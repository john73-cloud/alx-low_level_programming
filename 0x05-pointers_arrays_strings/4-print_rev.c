#include <stdio.h>
#include <string.h>

/**
* print_rev - reset num to 98
* @s: variable
* Return: void
*/

void print_rev(char *s)
{
	int begin, end, count = 0;
	char r[99999999999];

	while (s[count] != '\0')
	{
		count++;
	}

	end = count - 1;
	for (begin = 0; begin < count; begin++)
	{
		r[begin] = s[end];
		end--;
	}
	printf("%s", r);
}

