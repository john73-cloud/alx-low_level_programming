#include <stdio.h>
#include <unistd.h>
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
	if (filename == NULL)
	{
		return  (-1);
	}
	if (text_content == NULL && ptr == NULL)
	{
		return (-1);
	}
	else if (text_content == NULL && ptr != NULL)
	{
		return (1);
	}
	else
	{
		fputs(text_content, ptr);
		fclose(ptr);
	}
	return (1);
}
