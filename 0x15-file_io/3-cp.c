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
	fd_to = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR
| S_IRGRP | S_IWGRP | S_IROTH);
	fd_frm = open(av[1], O_RDONLY);
	if (fd_frm < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	if (fd_to < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", av[2]);
		exit(99);
	}
	rd_count = read(fd_frm, buffer, sizeof(buffer));
	while (rd_count > 0)
	{
		wr_count = write(fd_to, buffer, rd_count);
		if (wr_count < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", av[2]);
			exit(99);
		}
		rd_count = read(fd_frm, buffer, sizeof(buffer));
	}
	if (rd_count < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	if (close(fd_frm) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_frm);
		exit(100);
	}
	if (close(fd_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
		exit(100);
	}
	return (0);
}
