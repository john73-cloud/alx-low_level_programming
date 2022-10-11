#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * charArrayToInt - mul
 * @arr: arrr
 * Return: void
 */
char **mul(char *h, char *l)
{
	int i;
	int i2;
	int len1 = strlen(h);
	int len2 = strlen(l);
	char **results = malloc(sizeof(int) * len1 + len2);
	char **w;
	char *store = malloc(sizeof(int) * len1 + len2);
	if (results == NULL)
	{
		return (NULL);
	}
	for (i = len2 - 1; i < 0; i++)
	{
		for (i2 = 0; h[i2] != '\0'; i2++)
		{
			store[i2] = h[i2] * l[i];
		}
		results[i] = store;
	}
	w = results;
	return (w);
}
/**
 * main - mul
 * @arg: length of args
 * @argv: arg values
 * Return: void
 */
int main(int argc, char *argv[])
{
	int i;
	int i2;
	int i3;
	char **results;
	char *one = argv[1];
	char *two = argv[2];
	int len1 = strlen(argv[1]);
	int len2 = strlen(argv[2]);
	char al[52] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k',
				   'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w',
				   'x', 'y', 'z', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I',
				   'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U',
				   'V', 'W', 'X', 'Y', 'Z'};

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	for (i = 0; i < 52; i++)
	{
		for (i2 = 0; argv[2][i2] != '\0'; i2++)
		{
			if (al[i] == argv[2][i2])
			{
				printf("Error\n");
				exit(98);
			}
		}
		for (i3 = 0; argv[2][i3] != '\0'; i3++)
		{
			if (al[i] == argv[2][i3])
			{
				printf("Error\n");
				exit(98);
			}
		}
	}
	results = mul(one, two);
	printf("%s",results[1]);
	for (i3 = 0; i3 < len1 + len2; i3++)
	{
		puts(results[i]);
	}
	return (0);
}