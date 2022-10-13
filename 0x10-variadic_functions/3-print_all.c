#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include "variadic_functions.h"
/**
 * one - func
 * @ptr: ptr
 */
void one(va_list ptr)
{
	printf("%d", va_arg(ptr, int));
}
/**
 * two - func
 * @ptr: ptr
 */
void two(va_list ptr)
{
	printf("%f", va_arg(ptr, double));
}
/**
 * three - func
 * @ptr: ptr
 */
void three(va_list ptr)
{
	putchar(va_arg(ptr, int));
}
/**
 * four - func
 * @ptr: ptr
 */
void four(va_list ptr)
{
	printf("%s", va_arg(ptr, char *));
}
/**
 * print_all - printing
 * @format: formats
 * Return: void
 */
void print_all(const char * const format, ...)
{
	int len = strlen(format);
	int i = 0;
	m_t g[] = {
		{'i', &one},
		{'c', &three},
		{'s', &four},
		{'f', &two}
	};
	int x;
	va_list ptr;

	va_start(ptr, format);
	while (i < len)
	{
		x = 0;
		while (x < len)
		{
			if (format[i] == g[x].h)
			{
				g[x].fun(ptr);
				if (i != len - 1)
				{
					printf(", ");
				}
			}
			x++;
		}
		i++;
	}
	putchar('\n');
	va_end(ptr);
}
