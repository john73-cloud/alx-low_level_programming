#include <stdio.h>
/**
 * read_textfile - main
 * @filename: filename
 * @letters: amount of words
 * Return: ssize_t
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	size_t i;
	ssize_t m = 0;
	FILE *ptr;
	char c;

	ptr = fopen(filename, "r");
	if (ptr == NULL || filename == NULL)
	{
		return (0);
	}
	if (letters > 7)
	{
	}
	for (i = 0; c != EOF && i != letters; i++)
	{
		c = fgetc(ptr);
		if (c != EOF)
		{
			printf("%c", c);
			m++;
		}
	}
	fclose(ptr);
	return (m);
}
