#include "main.h"

/**
 * read_textfile - function that read a text and print it to std out
 * @filename: The name of the file
 * @letters: The number of letters to read snd print
 *
 * Return: The actual number of letter it can read asnd print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t file_fd;
	ssize_t file_w;
	ssize_t file_t;

	if (filename == 0)
		return (0);
	file_fd = open(filename, O_RDONLY);
	if (file_fd == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	file_t = read(file_fd, buffer, letters);
	file_w = write(STDOUT_FILENO, buffer, file_t);
	free(buffer);
	close(file_fd);
	return (file_w);
}
