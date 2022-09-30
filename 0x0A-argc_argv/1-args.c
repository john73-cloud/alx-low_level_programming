#include <stdio.h>

/**
 * main - main
 * @argc: int
 * @argv: void
 * Return: int
 */
int main(int argc, char *argv[])
{
	argv[8] = "";
	printf("%d\n", argc - 1);
	return (0);
}
