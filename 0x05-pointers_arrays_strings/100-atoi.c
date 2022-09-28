#include <stdio.h>
#include <stdlib.h>

/**
* _atoi - reset num to 98
* @s: variable
* Return: str length
*/

int _atoi(char *s)
{
	int i;
	int res = 0;

	for (i = 0; str[i] != '\0'; ++i)
	{
		res = res * 10 + str[i] - '0';
	}
	return (res);
}
