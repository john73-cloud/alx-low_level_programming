#include <stdio.h>
#include "3-calc.h"
#include <string.h>
/**
 * get_op_func - func
 * @s: char
 * Return: int
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while (i < 5)
	{
		if (strcmp(s, ops->op) == 0)
		{
			return (ops->f);
		}
		i++;
	}
	return (0);
}
