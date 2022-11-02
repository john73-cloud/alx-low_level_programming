#include <stdio.h>
/**
 * append_text_to_file - append
 * @filename: name
 * @text_content: content
 * Return: int
 */
int append_text_to_file(const char *filename, char *text_content)
{
	FILE *ptr;

	ptr = fopen(filename, "a");
	if (ptr == NULL || text_content == NULL)
	{
		return  (0);
	}
	else
	{
		fputs(text_content, ptr);
		fclose(ptr);
	}
	return (1);
}
