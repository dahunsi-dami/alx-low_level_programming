#include "main.h"
/**
 * create_file - function that creates a file.
 * @filename: the name of the file to be created.
 * @text_content: the content to be written into the file.
 *
 * Return: 1 if success, else -1.
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int rdwr;
	int l;

	if (!filename)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (!text_content)
		text_content = "";
	for (l = 0; text_content[l]; l++)
		;
	rdwr = write(fd, text_content, l);

	if (rdwr == -1)
		return (-1);
	close(fd);

	return (1);
}
