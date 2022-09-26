#include <stdio.h>
#include <string.h>
/**
 * print_chessboard - function
 * @a: char
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	int len = 8;
	int i;
	int i2;

	for (i = 0; i < len; i++)
	{
		for (i2 = 0; i2 < 8; i2++)
		{
			putchar(a[i][i2]);
		}
		putchar('\n');
	}
}
