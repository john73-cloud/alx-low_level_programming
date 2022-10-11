#include <stdio.h>
#include <string.h>
/**
 * print_diagsums - function
 * @a: char
 * @size: int
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i;
	int i2;
	int sum = 0;
	int num = 0;

	for (i = 0; i < size; i++)
	{
		for (i2 = 0; i2 < size; i2++)
		{
			printf("%d",a[i2]);
			if (num == i)
			{
				sum = sum + a[i2];
			}
			num++;
		}
		printf("%d", sum);
		putchar('\n');
	}
}
