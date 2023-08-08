#include "main.h"

/**
 * append_text_to_file - Function that appends text at the end
 * of a file.
 * @filename: The pointer to the name of the file.
 * @text_content: The string to be append to the end of the file.
 *
 * Return: 1 on success other wise -1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int b;
	int d;
	int length = 0;

	if (filename == NULL)
		return (-1);
	if (text_content)
	{
		for (length = 0; text_content[length];)
		length++;
	}
	b = open(filename, O_WRONLY | O_APPEND);
	d = write(b, text_content, length);
	if (b == -1 || d == -1)
		return (-1);
	close(b);
	return (1);
}
