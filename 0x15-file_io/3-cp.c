#include "main.h"

/**
 * main - copies contents on file to another
 * @ac: the number of arguments on the command line
 * @av: array containg command line arguments
 *
 * Description: program behaves like the cp command
 * has different exit values for various potential errors
 * uses a 1024 size buffer that reads/writes 1024 chars to/from the files
 * at a time
 * Return: returns 0
 */
int main(int ac, char **av)
{
	int fd_frm, fd_to, rd_count, wr_count;
	char buffer[1024];

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	if ((av[1] == NULL) || (strcmp(av[1], "\0") == 0))
		file_error(av[1], 0);
	if ((av[2] == NULL) || (strcmp(av[2], "\0") == 0))
		file_error(av[2], 1);
	fd_frm = open(av[1], O_RDONLY);
	if (fd_frm < 0)
		file_error(av[1], 0);
	fd_to = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR
| S_IRGRP | S_IWGRP | S_IROTH);
	if (fd_to < 0)
		file_error(av[2], 1);
	rd_count = read(fd_frm, buffer, 1024);
	while (rd_count > 0)
	{
		wr_count = write(fd_to, buffer, rd_count);
		if (wr_count < 0)
			file_error(av[2], 1);
		rd_count = read(fd_frm, buffer, 1024);
	}
	if (rd_count < 0)
		file_error(av[1], 0);
	close_error(fd_frm);
	close_error(fd_to);
	return (0);
}

/**
 * file_error - prints relavant file errors to stderr
 * @filename: name of file
 * @location: determines which file we are checking. from file = 0, to file = 1
 */
void file_error(char *filename, int location)
{
	if (location == 0)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
	else
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
	exit(98 + location);
}

/**
 * close_error - pritns the relevant error msg when closing a file
 * @fd: the file descriptor of file
 */
void close_error(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
