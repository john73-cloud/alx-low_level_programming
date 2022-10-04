#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - array
 * @size: size int
 * @c: char
 * Return: char /
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *str;

	str = malloc(sizeof(c) * size);
	if (size == 0)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		str[i] = c;
	}
	return (str);
}
