#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * argstostr - arguments to str
 * @ac: int
 * @av: args
 * Return: char *
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int i;
	int dy = 12;

	if (ac == 1)
	{
		dy = 0;
	}
	str = malloc((sizeof(char *) * ac) - dy);
	if (str == NULL)
	{
		return (NULL);
	}
	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		strcat(str, av[i]);
		strcat(str, "\n");
	}

	return (str);
}
