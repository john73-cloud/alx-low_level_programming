#include <stdio.h>
#include <stdlib.h>
/**
 * main - check the code
 * @ac: ac
 * @av: av
 * Return: Always 0.0
 */
int main(int ac, char **av)
{
	FILE *f1 = fopen(av[1], "r");
	FILE *f2 = fopen(av[2], "w");
	char ch;
	int m, t;

	if (ac != 3)
	{
		fprintf(stderr, "Usage: cp file_from file_to\n");
		exit(97);
	}
	if (f1 == NULL)
	{
		fprintf(stderr, "Error: Can't read from file NAME_OF_THE_FILE %s\n", av[1]);
		exit(98);
	}
	if (f2 == NULL)
	{
		fprintf(stderr, "Error: Can't write to %s\n", av[2]);
	}
	while (ch != EOF)
	{
		if (ch != EOF)
		{
			ch = fgetc(f1);
			fputc(ch, f2);
		}
	}
	m = fclose(f1);
	t = fclose(f2);
	if (m == EOF)
	{
		fprintf(stderr, "Error: Can't close fd %d", m);
		exit(100);
	}
	if (t == EOF)
	{
		fprintf(stderr, "Error: Can't close fd %d", t);
		exit(100);
	}
	return (1);
}
