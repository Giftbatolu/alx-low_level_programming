#include "main.h"

/**
 * create_file - create a file
 * @filename: Pionter to the filename to create.
 * @text_content: Pointer to the string to write to the file.
 *
 * Return: on success -1, 0on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int b;
	int len = 0;

	if (filename == NULL)
		return (-1);
	if (text_content)
	{
		for (len = 0; text_content[len];)
		len++;
	}
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	b = write(fd, text_content, len);
	if (fd == -1 || b == -1)
		return (-1);
	close(fd);
	return (1);
}
