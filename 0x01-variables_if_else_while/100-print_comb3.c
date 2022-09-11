#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - Entry point
 * Return: Always 0 ( Success)
 */
int main(void)
{
	int one = 0;
	int two = 0;
	int i;

	for (i = 0; i < 100; i++)
	{
		while(one < 10)
		{
			two = 0;
			while(two < 10)
			{
				putchar(one);
				putchar(two);
				if (one != 9 && two != 9)
				{
					putchar(',');
					putchar(' ');
				}
				++two;
			}
			++one;
		}
	}
	putchar('\n');
	return (0);
}
