#include "main.h"

/**
 * create_file - creates a new fileand writes a string received from cmmdline
 * @filename: the name of the file
 * @text_content: the string that must be written to file
 *
 * Description: The created file should have read/write permissions else
 * the permissions of the existing file should remain unchanged but file will
 * be overwritten
 * Return: returns 1 on success else -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bytes;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
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
