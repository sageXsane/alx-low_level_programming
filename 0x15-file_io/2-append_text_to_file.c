#include "main.h"

/**
 * append_text_to_file - appends a file and writes a string to it
 * @filename: the name of the file
 * @text_content: the string that must be written to file
 *
 * Description: The file should not be created if it does not exist
 * Return: returns 1 on success else -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bytes;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_EXCL | O_APPEND);
	if (fd < 0)
		return (-1);
	if (text_content != NULL)
	{
		bytes = write(fd, text_content, strlen(text_content));
		if ((bytes < 0) || ((size_t)bytes < strlen(text_content)))
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
