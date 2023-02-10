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
	ssize_t actual_num, write_nums;
	char *buf;

	if (!filename)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (!buf)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	actual_num = read(fd, buf, letters);
	if (actual_num == -1)
	{
		free(buf);
		close(fd);
		return (0);
	}

	write_nums = write(STDOUT_FILENO, buf, actual_num);
	if (write_nums == -1 || write_nums != actual_num)
	{
		free(buf);
		close(fd);
		return (0);
	}
	free(buf);
	close(fd);
	return (actual_num);
}
