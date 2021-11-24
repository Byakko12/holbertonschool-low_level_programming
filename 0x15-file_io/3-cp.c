#include "main.h"
/**
 * main - copies the content of a file to another file.
 * @argc: number of arguments
 * @argv: name of files
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int fd_source, fd_dest, c, fd_read, fd_write;
	char *buf[1024];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"),
			exit(97);
	fd_source = open(argv[1], O_RDONLY);
	if (fd_source == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]),
			exit(98);
	fd_dest = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd_dest == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]),
			exit(99);

	fd_read = 1024;
	while (fd_read == 1024)
	{
		fd_read = read(fd_source, buf, 1024);
		if (fd_read == -1)
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]),
				exit(98);
		fd_write = write(fd_dest, buf, fd_read);
		if (fd_write == -1)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]),
				exit(99);
	}
	c = close(fd_source);
	if (c == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_source),
			exit(100);
	c = close(fd_dest);
	if (c == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_dest),
			exit(100);

	return (0);
}
