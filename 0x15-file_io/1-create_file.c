#include "main.h"

/**
 * create_file - function that create file
 * @filename: The pointer to the file to create
 * @text_content: The pointer to the sting to write
 *
 * Return: 1 on success otherwise -1
 */
int create_file(const char *filename, char *text_content)
{
	int file_fd;
	int file_w;
	int file_len = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (file_len = 0; text_content[file_len];)
			file_len++;
	}
	file_fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	file_w = write(file_fd, text_content, file_len);
	if (file_fd == -1 || file_w == -1)
		return (-1);
	close(file_fd);
	return (1);
}
