#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - description
 * @separator: separate
 * @n: int len
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ptr;

	va_start(ptr, n);
	for (i = 0; i < n; i++)
	{
		if (separator == NULL)
		{
			printf("%d", va_arg(ptr, int));
		}
		else
		{
			printf("%d", va_arg(ptr, int));
			if (i != n - 1)
			{
				printf("%s",separator);
			}
		}
	}
	putchar('\n');
	va_end(ptr);
}
