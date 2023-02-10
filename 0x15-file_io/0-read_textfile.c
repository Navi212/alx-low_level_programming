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
	ssize_t fd, num, num_of_letters;
	char *buf;

	if (filename == NULL)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	num_of_letters = read(fd, buf, letters);
	num = write(STDOUT_FILENO, buf, letters);

	if (fd == -1 || num_of_letters == -1 || num == -1 || w != r)
	{
		free(buffer);
		return (0);
	}

	free(buf);
	close(fd);
	return (num_of_letters);
}
