#include <stdio.h>
#include <ctype.h>
#include "main.h"
/**
 * _isdigit - check the code.
 *@c: an integer
 * Return: zero  0 or one 1.
 */

int _isdigit(int c)
{

	int m = isdigit(c);
	int r;

	if (m > 0)
	{
		r = 1;
	}
	else
	{
		r = 0;
	}

	return (r);
}
