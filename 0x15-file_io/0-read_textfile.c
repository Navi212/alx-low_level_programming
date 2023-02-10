#include "main.h"

/**
 * read_textfile - reads text file and prints it to
 * the POSIX standard output
 * @filename: file to read from
 * @letters: number of letters to read
 *
 * Return: actual number of letters
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t readed, num;
	char *buf;

	if (filename == NULL)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (!buf)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	readed = read(fd, buf, letters);
	if (readed == -1)
	{
		free(buf);
		close(fd);
		return (0);
	}

	num = write(STDOUT_FILENO, buf, readed);
	if (num == -1 || num != readed)
	{
		free(buf);
		close(fd);
		return (0);
	}
	free(buf);
	close(fd);
	return (readed);
}
