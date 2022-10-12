#include <stdio.h>
/**
 * print_name - print
 * @name: name
 * @f:function
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
