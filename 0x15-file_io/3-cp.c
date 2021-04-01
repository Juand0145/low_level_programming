#include "holberton.h"

/**
 * main - copies the content of one file to another file
 * @ac: The number of arguments introduce it.
 * @av: The string of the arguments
 * Return: if it works it will return 0 if it works and if not depending of the
 * error will return 97, 98, 99 or 100;
 */
int main(int ac, char *av[])
{
	int fd_read, fd_write, R, A, B;
	char buffer[BUFSIZ];

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		return (97);
	}
	fd_read = open(av[1], O_RDONLY);
	if (fd_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		return (98);
	}
	fd_write = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while ((R = read(fd_read, buffer, BUFSIZ)) > 0)
	{
		if (fd_write < 0 || write(fd_write, buffer, R) != R)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
			close(fd_read);
			exit(99);
		}
	}
	if (R < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	A = close(fd_read);
	B = close(fd_write);
	if (A == -1 || B == -1)
	{
		if (A == -1)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_read);
		if (B == -1)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_write);
		exit(100);
	}
	return (0);
}
