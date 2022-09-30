#include <stdio.h>

/**
 * main - main
 * @argc: int
 * @argv: void
 * Return: int
 */
int main(int argc, char *argv[])
{
	int i;
	for (i = 0; i < argc - 1; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
