#include <stdio.h>

/**
 * reverse_array - reverse input
 * @a: int
 * @n: num
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i;
	int num = 0;
	int r[n];

	for (i = n; i > -1; --i)
	{
		r[num] = a[i];
		num++;
	}
	a = r;
}
