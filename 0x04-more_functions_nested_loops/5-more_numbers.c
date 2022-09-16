#include "main.h"
#include <stdio.h>

/**
 * more_numbers - check the code
 *
 * Return: Always 0.
 */
void more_numbers(void)
{
	int i;
	int c[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};

	while (i <= 10)
	{
	for (i = 0; i < 10; i++)
	{
		putchar(c[i]);
	}
	putchar('\n');
	i++;
	}
putchar('\n');
}
