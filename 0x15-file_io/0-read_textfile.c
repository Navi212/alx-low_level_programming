#include "main.h"

/**
 * read_textfile - a function that reads a text file and
 * prints it to the POSIX standard output
 * @filename: file to read from
 * @letters: number of letters
 *
 * Return: actual number of letter it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, ssize_t num_of_letters;
	char *buf;

	if (!filename)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (!buf)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	num_of_letters = read(fd, buf, letters);
	if (num_of_letters == -1)
		return (0);

	num = write(STDOUT_FILENO, buf, letters);
	if (num == -1)
		return (0);

	close(fd);
	free(buf);
	return (num_of_letters);
}
