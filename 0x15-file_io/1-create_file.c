#include "main.h"

/**
 * create_file - a function that creates a file
 * @filename: filename to create
 * @text_content: text content to copy into filename
 *
 * Return: 1 on success
 * or -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd, i, num;

	if (!filename)
		return (-1);

	if (text_content != NULL)
	{
		for (i = 0; text_content[i]; i++)
			;
	}

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	num = write(fd, text_content, i);
	if (num == -1)
		return (-1);

	close(fd);
	return (1);
}
