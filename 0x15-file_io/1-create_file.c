#include "main.h"

/**
 * create_file - function that creates a file.
 * @filename: The pointer to the name of the file to create.
 * @text_content: The pointer to a string to write to the file.
 *
 * Return: 1von success otherwise -1.
 */
int create_file(const char *filename, char *text_content)
{
	int fp;
	int b;
	int length = 0;

	if (filename == NULL)
		return (-1);
	if (text_content)
	{
		for (length = 0; text_content[length];)
		length++;
	}
	fp = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	b = write(fp, text_content, length);
	if (fp == -1 || b == -1)
		return (-1);
	close(fp);
	return (1);
}
