#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * read_textfile - functio that read text file print to STDOUT.
 * @filename: text file to be read.
 * @letters: number of letters to be read and print
 *
 * Return: 0 if fails to write
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *ch;
	ssize_t fd;
	ssize_t b;
	ssize_t d;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	ch = malloc(sizeof(char) * letters);
	d = read(fd, ch, letters);
	b = write(STDOUT_FILENO, ch, d);
	free(ch);
	close(fd);
	return (b);
}
