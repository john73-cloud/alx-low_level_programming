#include <stdio.h>
#include <string.h>

/**
 * main_print - string length
 * @n: int
 * @m: int
 * @c: int
 * Return: main
 */
int main_print(int n, int m, int c)
{
	if (n < 0)
	{
		return (-1);
	}
	m = n * n - c;
	c++;
	if (c == n)
	{
		return (m);
	}
	main_print(n, m, c);
}
/**
 * factorial - string length
 * @n: str
 * Return: unsigned int
 */
int factorial(int n)
{
	int c = 0;
	int m = 0; 
	return (main_print(n, m, c));
}
