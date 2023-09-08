#include "main.h"

/**
 * create_file - creates a new fileand writes a string received from cmmdline
 * @filename: the name of the file
 * @text_context: the string that must be written to file
 *
 * Description: The created file should have read/write permissions else
 * the permissions of the existing file should remain unchanged but file will
 * be overwritten
 * Return: returns 1 on success else -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0);
	if (fd < 0)
		return (-1);
	if (text_content != NULL)
	{
		if (write(fd, text_content, strlen(text_content))  == -1)
			return (-1);
	}
	close(fd);
	return (1);
}
