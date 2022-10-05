#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *argstostr(int ac, char **av)
{
	char *str;
	int i;
	int i2;
	int len;
	char m[ac];

	str = malloc(sizeof(char *) * ac);
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
		str[i] = av[i];
		putchar('\n');
	}

	return (str);
}
