#include <stdio.h>

/**
 * main - main
 * @argc: int
 * @argv: void
 * Return: void
 */
int main(int argc, char *argv[])
{
	argv[8] = "main";
	printf("%d\n", argc);
	return (0);
}
