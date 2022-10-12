#include <stdio.h>
#include <string.h>
#include "3-calc.h"
#include <stdlib.h>
/**
 * main - func main
 * @argc: length
 * @argv: args
 * Return: int
 */
int main(int argc, char *argv[])
{
	int num;
	int x = atoi(argv[1]);
	int y = atoi(argv[3]);
	int (*fun)(int,  int) = get_op_func(argv[2]);
	
	if (argc < 4)
	{
		printf("Error");
	}
	num = fun(x, y);
		printf("%d", num);
	return (0);
}
