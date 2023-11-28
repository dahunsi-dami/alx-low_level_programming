#include "main.h"

void check_stat_of_io(int fd, char *filename, int stat, char mode);
/**
 * main - function copies content of 1 file to another.
 * @argc: the number of arguments passed.
 * @argv: 1D array of arguments passed.
 *
 * Return: 1 for success, else exit.
 */
int main(int argc, char *argv[])
{
	int src, dest, rd_n = 1024, wr, close_src, close_dest;
	unsigned int mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s", "Usage: cp file_from file_to\n");
		exit(97);
	}
	src = open(argv[1], O_RDONLY);
	check_stat_of_io(-1, argv[1], src, 'O');
	dest = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, mode);
	check_stat_of_io(-1, argv[2], dest, 'W');
	while (rd_n == 1024)
	{
		rd_n = read(src, buffer, sizeof(buffer));
		if (rd_n == -1)
			check_stat_of_io(-1, argv[1], -1, 'O');
		wr = write(dest, buffer, rd_n);
		if (wr == -1)
			check_stat_of_io(-1, argv[2], -1, 'W');
	}
	close_src = close(src);
	check_stat_of_io(src, NULL, close_src, 'C');
	close_dest = close(dest);
	check_stat_of_io(dest, NULL, close_dest, 'C');
	return (0);
}
/**
 * check_stat_of_io - checks if a file can be opened or closed.
 * @fd: the file descriptor.
 * @filename: the file name.
 * @stat: the file descriptor of the file to be opened.
 * @mode: to signify opening or closing.
 *
 * Return: unnecessary as void returns nothing.
 */
void check_stat_of_io(int fd, char *filename, int stat, char mode)
{
	if (mode == 'C' && stat == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
	else if (mode == 'O' && stat == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
		exit(98);
	}
	else if (mode == 'W' && stat == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		exit(99);
	}
}
