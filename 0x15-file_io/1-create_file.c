#include "main.h"

/**
 * create_file - creates and writes to a file
 * @filename: name of file
 * @text_content: what is written on file
 *
 * Return: 1 on success or -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t size = 0;
	ssize_t wr_bytes;

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if ((fd == -1) || (filename == NULL))
	{
		close(fd);
		return (-1);
	}
	if (text_content != NULL)
	{
		while (text_content[size] != '\0')
			size++;
		wr_bytes = write(fd, text_content, size);
		if ((wr_bytes < 0) || (wr_bytes < size))
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
