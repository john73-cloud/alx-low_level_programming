#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - Entry point
 * Return: Always 0 ( Success)
 */
int main(void)
{
	int i;
	char al[26] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
	for (i = 0; i < 10; i++)
	{
		putchar(al[i]);
	}
	putchar('\n');
	return (0);
}
