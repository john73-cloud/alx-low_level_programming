#include <stdio.h>
#include <ctype.h>
#include "main.h"
/**
 * _isupper - check the code.
 *
 * Return: zero  0 or one 1.
 */

int _isupper(int c)
{
	if(isupper(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
