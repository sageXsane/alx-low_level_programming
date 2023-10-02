#include "main.h"

/**
 * append_text_to_file - appends to a file
 * @filename: name of file
 * @text_content: what is written on file
 *
 * Return: 1 on success or -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t size = 0;
	ssize_t wr_bytes;

	if (text_content != NULL)
	{
		fd = open(filename, O_WRONLY | O_APPEND, S_IRUSR | S_IWUSR);
		if ((fd == -1) || (filename == NULL))
		{
			close(fd);
			return (-1);
		}
		while (text_content[size] != '\0')
			size++;
		size++;
		wr_bytes = write(fd, text_content, size);
		if ((wr_bytes < 0) || (wr_bytes < size))
		{
			close(fd);
			return (-1);
		}
	}
	return (1);
}
