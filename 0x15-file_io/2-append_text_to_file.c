#include "main.h"

/**
 * append_text_to_file - append text at the end of file.
 * @filename: Pointer to the file.
 * @text_content: Pointer to the string to add at the ene of file.
 *
 * Return: 1 on success and -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int b;
	int d;
	int len = 0;

	if (filename == NULL)
		return (-1);
	if (text_content)
	{
		for (len = 0; text_content[len];)
		len++;
	}
	b = open(filename, O_WRONLY | O_APPEND);
	d = write(b, text_content, len);
	if (b == -1 || d == -1)
		return (-1);
	close(b);
	return (1);
}
