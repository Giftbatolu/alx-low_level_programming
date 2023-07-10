#include "main.h"

/**
 * append_text_to_file - fuction that append text at the end of file
 * @filename: The pointer to the file to append
 * @text_content: The pointer to the string to append
 *
 * Return: 1 on sucesss otherwise -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_open;
	int file_w;
	int file_len = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (file_len = 0; text_content[file_len];)
			file_len++;
	}
	file_open = open(filename, O_WRONLY | O_APPEND);
	file_w = write(file_open, text_content, file_len);
	if (file_open == -1 || file_w == -1)
		return (-1);
	close(file_open);
	return (1);
}
