#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - description
 * @separator: separate
 * @n: int len
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ptr;

	va_start(ptr, n);
	for (i = 0; i < n; i++)
	{
		if (separator == NULL)
		{
			printf("%s", va_arg(ptr, char *));
		}
		else
		{
			if (va_arg(ptr, char *) != NULL)
			{
				printf("%s", va_arg(ptr, char *));
			}
			else
			{
				printf("nill");
			}
			if (i != n - 1)
			{
				printf("%s", separator);
			}
		}
	}
	putchar('\n');
	va_end(ptr);
}
