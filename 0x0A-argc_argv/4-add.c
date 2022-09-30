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
	int two = 0;
	int sum;

	if (argc == 1)
	{
		printf("0\n");
		return (1);
	}
	for (one = 1; one < argc; one++)
	{
		sum = atoi(argv[one]);
		if (sum == 0)
		{
			printf("Error\n");
			return (1);
		}
		two = two + sum;
	}
	printf("%d\n", two);
	return (0);
}
