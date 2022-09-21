#include <stdio.h>
/**
* print_array - print num
* @a: variable
* @n: number
* Return: void
*/

void print_array(int *a, int n)
{
	int i;
	int c = n;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n && i != c - 1)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
}
