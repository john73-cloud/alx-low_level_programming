#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * charArrayToInt - mul
 * @arr: arrr
 * Return: void
 */
int charArrayToInt(char *arr) {
	unsigned i, value, r, flag;

	flag = 1;
	i = value = 0;
	for(i = 0; i < strlen(arr); ++i)
	{
		if(i == 0 && arr[i] == '-')
		{
			flag = -1;
			continue;
		}
		r = arr[i] - '0';
		value = value * 10 + r;
    }
	value = value * flag;
	return value;        
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
	char *one = argv[1];
	char *two = argv[2];
	int on;
	int tw;
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
	on = charArrayToInt(one);
	tw = charArrayToInt(two);
	printf("%d\n", on * tw);
	return (0);
}
