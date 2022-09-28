#include <stdio.h>
#include <string.h>

char *str;
int len;
int i = 0;

/**
 * main_print - string length
 * @s: str
 * Return: unsigned int
 */
void main_print(void)
{
	putchar (str[i]);
	i = i - 1;
	if (i == 0)
	{
		putchar ('\n');
		return;
	}
	main_print();
}
/**
 * _print_rev_recursion - string length
 * @s: str
 * Return: unsigned int
 */
void _print_rev_recursion(char *s)
{
        len = strlen(s);
	i = len;
	str = s;

	main_print();
}
