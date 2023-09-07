#include "main.h"

/**
 * read_textfile - reads and prints a textfile
 * @filename: the name of the file
 * @letters: the number of bytes to be printed
 *
 * Return: returns the number of bytes printed or 0 if there's errors
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *str = malloc(letters * sizeof(char));
	ssize_t count;
	ssize_t count_rd;

	if ((filename == NULL) || (str == NULL))
	{
		free(str);
		return (0);
	}
	fd = open(filename, O_RDONLY);
	if (fd < 0)
	{
		free(str);
		return (0);
	}
	count = read(fd, str, letters);
	if (count <= 0)
	{
		free(str);
		return (0);
	}
	count_rd = write(STDOUT_FILENO, str, count);
	free(str);
	close(fd);
	if (count_rd < 0)
		return (0);
	return (count_rd);
}
