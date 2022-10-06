#include <stdio.h>
#include <stdlib.h>

/**
 * main - mul
 * @arg: length of args
 * @argv: arg values
 * Return: void
 */
int main(int arg, char *argv[])
{
	int o;
	int t;

	if (arg != 3)
	{
		printf("Error\n");
		exit(98);
	}
	o = atoi(argv[1]);
	t = atoi(argv[2]);
	if (o == 0 || t == 0)
	{
		printf("Error\n");
		exit(98);
	}
	printf("%d\n", o * t);
	return (0);
}
