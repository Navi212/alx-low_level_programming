#include "main.h"

/**
 * append_text_to_file - appends text at the end of  file
 * @filename: file to append into
 * @text_content: content to be appended into filename
 *
 * Return: 1 on success
 * -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, num, i = 0;

	if (filename == NULL || text_content == NULL)
		return (-1);

	fd = open(filename, O_EXCL | O_APPEND | O_WRONLY);
	if (fd == -1)
		return (-1);

	for (; text_content[i]; i++)
		;

	num = write(fd, text_content, i);
	if (num == -1)
		return (-1);

	close(fd);

	return (1);
}
