#include "main.h"
#include <stdio.h>

/**
 * print_line - check the code
 *@n: integer
 * Return: Always 0.
 */
void print_line(int n)
{
	int b = 0;
	int i = 0;

	while (i < 0)
	{
		for (b = 0; b < n; b++)
		{
			putchar('_');
		}
		putchar('\n');
		i++;
	}
}
