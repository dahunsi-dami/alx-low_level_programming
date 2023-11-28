#include "main.h"
/**
 * read_textfile - reads a text file and prints it to POSIX standard output.
 * @filename: the name of the file to be read.
 * @letters: the number of letters to be read and printed.
 *
 * Return: the number of letters it should read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t rdlen, wrlen;
	char *buffer;
	int fd;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}
	rdlen = read(fd, buffer, letters);
	close(fd);
	if (rdlen == -1)
	{
		free(buffer);
		return (0);
	}
	wrlen = write(STDOUT_FILENO, buffer, rdlen);
	free(buffer);
	if (rdlen != wrlen)
		return (0);
	return (wrlen);
}
