#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - Entry point
 * Return: Always 0 ( Success)
 */
int main(void)
{
	int i;
	char al[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k',
		'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
	for (i = 0; i < 26; i++)
	{
		putchar(al[i]);
	}
	putchar('\n');
	return (0);
}
