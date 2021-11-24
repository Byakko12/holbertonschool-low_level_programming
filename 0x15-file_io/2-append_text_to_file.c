#include "main.h"
/**
 * append_text_to_file - appends text at the end of a file
 * @filename: is the name of the file to create
 * @text_content:  is a NULL terminated string to write to the file
 * Return: 1 on success and -1 on failure
 **/
int append_text_to_file(const char *filename, char *text_content)
{
	int i = 0;
	int fd_open = 0;
	ssize_t fd_write = 0;

	if (filename == NULL)
	{
		return (0);
	}
	fd_open = open(filename, O_CREAT | O_WRONLY| O_APPEND, 0600);
	if (fd_open == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		for (i = 0; text_content[i] != '\0'; i++)
		{
		}
		fd_write = write(fd_open, text_content, i);
		if (fd_write == -1)
		{
			return (-1);
		}
	}
	close(fd_open);
	return (1);
}
