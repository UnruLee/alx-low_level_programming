#include "main.h"
#include <stdlib.h>

/**
 * read_textfile -  function that reads a text file and prints it to
 * the POSIX standard output.
 * @filename: filename variable
 * @letters: letter variable
 * Return: actual number of letters it could read and print
 *        if the file can not be opened or read, return 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *b;
	ssize_t fd;
	ssize_t w;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	b = malloc(sizeof(char) * letters);
	t = read(fd, b, letters);
	w = write(STDOUT_FILENO, b, t);

	free(b);
	close(fd);
	return (w);
}

