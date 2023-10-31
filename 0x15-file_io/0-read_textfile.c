#include "main.h"

/**
 * read_textfile - read text from a file and print it to standard
 * output.
 * @filename: The number of the file.
 * @letters: The letters to read and print to standard output.
 *
 * Return: The actual number read.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t fd;
	ssize_t b;
	ssize_t d;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	d = read(fd, buffer, letters);
	b = write(STDOUT_FILENO, buffer, d);
	free(buffer);
	close(fd);
	return (b);
}
