#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *argstostr(int ac, char **av)
{
	char *str;
	int i;

	str = malloc(sizeof(char) *ac);
	if (str == NULL)
	{
		return (NULL);
	}
	if (ac == 0 || ac == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		str[i] = av[i];
	}

	return (str);
}
