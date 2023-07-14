#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * read_textfile- Read text file print to STDOUT.
 * @filename: text file being read
 * @letters: number of letters to be read
 * Return: s- actual number of bytes read and printed
 *        0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t s;
	ssize_t x;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	x = read(fd, buf, letters);
	s = write(STDOUT_FILENO, buf, x);

	free(buf);
	close(fd);
	return (s);
}
