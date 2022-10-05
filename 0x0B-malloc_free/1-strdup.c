#include <stdio.h>
#include <string.h>

/**
 * _strdup - main function
 * @str: string
 * Return: char *
 */

char *_strdup(char *str)
{
	if (str == NULL)
	{
		return (NULL);
	}
	return (strdup(str));
}
