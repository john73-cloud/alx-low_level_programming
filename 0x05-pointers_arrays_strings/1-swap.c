#include <stdio.h>
/**
* swap_int - reset num to 98
* @b: variable
* @a: variable
* Return: void
*/

void swap_int(int *a, int *b)
{
	int *tmp = &a;
	*a = &b;
	*b = &tmp;
}
