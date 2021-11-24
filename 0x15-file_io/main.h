#ifndef _HEADER_IO_
#define _HEADER_IO_

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/stat.h>
#include <fcntl.h>

int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);

#endif
