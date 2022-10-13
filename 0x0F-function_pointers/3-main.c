#include <stdio.h>
#include <string.h>
#include "3-calc.h"
#include <stdlib.h>
/**
 * main - func main
 * @argv: args
 * Return: int
 */
int main(char *argv[])
{
	int x = atoi(argv[1]);
	int y = atoi(argv[3]);
	int (*fun)(int,  int) = get_op_func(argv[2]);

	printf("%d", fun(x, y));
	return (0);
}
