#include "main.h"

/**
 * read_textfile - reads a textfile and writes it to standard output
 * @filename: name of file
 * @letters: number of chars of file to read and write
 *
 * Return: the number of bytes read/written else 0 if fails
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t rd_bytes = 0;
	ssize_t wr_bytes;
	char *buffer = malloc(letters * sizeof(char));

	if ((filename == NULL) || (buffer == NULL))
		return (0);
	fd = open(filename, O_RDONLY);
	if ((fd == -1) || (letters == 0))
	{
		close(fd);
		free(buffer);
		return (0);
	}
	rd_bytes = read(fd, buffer, letters);
	if (rd_bytes <= 0)
	{
		close(fd);
		free(buffer);
		return (0);
	}
	wr_bytes = write(STDOUT_FILENO, buffer, rd_bytes);
	close(fd);
	free(buffer);
	if (wr_bytes <= 0)
		return (0);
	return (rd_bytes);
}
