
#include "holberton.h"
#include <stdarg.h>

/**
 * main - Copy content from one file to another
 * @argc: Argument count
 * @argv: Array of args
 * Return: 1 on success, -1 on failure
 */

int main(int argc, char *argv[])
{
	int file_src, file_dest, rd, wrt = 1;
	char buffer[1024];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_src file_dest\n"),
			exit(97);
	if (argv[1] == NULL)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
			argv[1]), exit(98);
	if (argv[2] == NULL)
		dprintf(STDERR_FILENO, "Error: Can't write to file %s\n",
			argv[2]), exit(99);
	file_src = open(argv[1], O_RDONLY);
	file_dest = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	rd = read(file_src, buffer, 1024);
	if (rd == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
			argv[1]), exit(98);
	while (rd != 0)
	{
		wrt = write(file_dest, buffer, rd);
		if (wrt == -1 || rd != wrt)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n",
				argv[2]), exit(99);
		rd = read(file_src, buffer, 1024);
		if (rd == -1)
			dprintf(STDERR_FILENO, "Error: Can't read from %s\n",
				argv[1]), exit(98);
	}
	wrt = close(file_src);
	if (wrt == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_src),
			exit(100);
	wrt = close(file_dest);
	if (wrt == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_dest),
			exit(100);
	return (0);
}
