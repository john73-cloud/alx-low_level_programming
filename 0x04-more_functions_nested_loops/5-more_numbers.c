#include "main.h"
#include <stdio.h>

/**
 * more_numbers - check the code
 *
 * Return: Always 0.
 */
void more_numbers(void)
{
	int b = 0;
	int i;
	int c[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8',
		'9', '1', '0', '1', '1', '1', '2', '1', '3', '1', '4'};

	while (b < 10)
	{
	for (i = 0; i < 20; i++)
	{
		putchar(c[i]);
	}
	putchar('\n');
	b++;
	}
}
