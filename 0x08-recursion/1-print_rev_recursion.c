#include <stdio.h>
#include <string.h>

/**
 * main_print - string length
 * @str: str
 * @i: int
 * Return: main
 */
void main_print(int i, char *str)
{
	if (strcmp(str, "") == 0)
	{
		return;
	}
	putchar (str[i]);
	i = i - 1;
	if (i == 0)
	{
		putchar ('\n');
		return;
	}
	main_print(i, str);
}
/**
 * _print_rev_recursion - string length
 * @s: str
 * Return: unsigned int
 */
void _print_rev_recursion(char *s)
{
	int len;
	int i;
	char *str;

	len = strlen(s);
	i = len - 1;
	str = s;
	main_print(i, str);
}
