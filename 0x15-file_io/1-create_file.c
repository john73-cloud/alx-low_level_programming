#include <stdio.h>
#include <fcntl.h>
#include <string.h>
#include <unistd.h>

int create_file(const char *filename, char *text_content)
{
	int ptr;

	ptr = open(filename, O_RDWR|O_CREAT|O_EXCL, 600);
	write(ptr, text_content, strlen(text_content));
	close(ptr);
	return (1);
}
