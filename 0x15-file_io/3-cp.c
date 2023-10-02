#include "main.h"

/**
 * main - copies contents from one file to another
 * @argc: number of arguments on command line
 * @argv: string array of commandline arguments
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	int fd_frm;
	int fd_to;
	char *buffer[1024];
	ssize_t rd_bytes = -1, wr_bytes;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	if (argv[1] == NULL)
		file_error(argv[1], 1);
	if (argv[2] == NULL)
		file_error(argv[2], 2);
	fd_frm = open(argv[1], O_RDONLY);
	if (fd_frm == -1)
		file_error(argv[1], 1);
	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR
| S_IRGRP | S_IWGRP | S_IROTH);
	if (fd_to == -1)
		file_error(argv[2], 2);
	while (rd_bytes != 0)
	{
		rd_bytes = read(fd_frm, buffer, 1024);
		if (rd_bytes < 0)
			file_error(argv[1], 1);
		wr_bytes = write(fd_to, buffer, rd_bytes);
		if (wr_bytes < 0)
			file_error(argv[2], 2);
	}
	close_error(fd_to);
	close_error(fd_frm);
	return (0);
}

/**
 * file_error - prints err message to stderr depending on what file it is
 * @filename: name of file
 * @element: the element number of file in command line
 */
void file_error(char *filename, int element)
{
	if (element == 1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
		exit(98);
	}
	else
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		exit(99);
	}
}

/**
 * close_error - checks for close(fd) erorrs and prints appropraite err msg
 * @fd: the file descriptor that must be closed
 */
void close_error(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
