#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * main - main
 * @argc: int
 * @argv: void
 * Return: int
 */
int main(int argc, char *argv[])
{
	int one;
	int two;
	int three;

	if (argc - 1 != 2)
	{
		printf("Error\n");
		return (1);
	}
	one = atoi(argv[1]);
	two = atoi(argv[2]);
	three = two * one;
	printf("%d\n", three);
	return (0);
}
