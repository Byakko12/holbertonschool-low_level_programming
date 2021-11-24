#include "main.h"
/**
 * read_textfile - Reads a text file and prints
 * it to the POSIX standard output.
 * @filename: Filename address.
 * @letters: Number of chars to be printed.
 * Return: Number of chars printed.
 **/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd_open = 0;
	ssi fd_read = 0;
	ssize_t fd_write = 0;
	int fd_close = 0;
	char *buff;

	buff = malloc(sizeof(char) * letters);
	if (buff == NULL || filename == NULL)
	{
		return (0);
	}

	fd_open = open(filename, O_RDONLY);
	if (fd_open == -1)
	{
		return (0);
	}

	fd_read = read(fd_open, buff, letters);
	if (fd_read == -1)
	{
		return (0);
	}

	fd_write = write(STDOUT_FILENO, buff, fd_read);
	if (fd_write == -1)
	{
		return (0);
	}

	fd_close = close(fd_open);
	if (fd_close == -1)
	{
		return (0);
	}
	free(buff);
	return (fd_read);
}
