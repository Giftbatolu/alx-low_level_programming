#include "main.h"

char *allocate_buffer(char *file);
void close_file(int fd);

/**
 * allocate_buffer - allocate buffer
 * @file: Pointer to the file.
 *
 * Return: Pointer to the newly allocated buffer.
 */
char *allocate_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);
	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		exit(99);
	}
	return (buffer);
}

/**
 * close_file - close the file descriptor.
 * @fd: The descriptor to be closed.
 *
 * Return: notjings
 */
void close_file(int fd)
{
	int b;

	b = close(fd);
	if (b == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - copies the content of a file to another file.
 * @argc: The argument count.
 * @argv: The argument vector.
 *
 * Return: Always 0 on sucess.
 */
int main(int argc, char *argv[])
{
	int from, to, b, d;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buffer = allocate_buffer(argv[2]);
	from = open(argv[1], O_RDONLY);
	b = read(from, buffer, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	do {
		if (from == -1 || b == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}
		d = write(to, buffer, b);
		if (to == -1 || d == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}
		b = read(from, buffer, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);
	} while (b > 0);
	free(buffer);
	close_file(from);
	close_file(to);
	return (0);
}
