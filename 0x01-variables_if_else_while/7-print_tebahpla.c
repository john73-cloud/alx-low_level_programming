#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - Entry point
 * Return: Always 0 ( Success)
 */
int main(void)
{
	int i;
	int al[26] = {'z', 'y', 'x', 'w', 'v', 'u', 't', 's', 'r', 'q',
		'p', 'o', 'n', 'm', 'l', 'k', 'j', 'i', 'h', 'g', 'f',
		'e', 'd', 'c', 'b', 'a'};

	for (i = 0; i < 26; i++)
	{
		putchar(al[i]);
	}
	putchar('\n');
	return (0);
}
