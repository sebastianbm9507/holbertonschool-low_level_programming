#include "holberton.h"


/**
 * read_textfile - Reads a text file and print to standard ouput
 * @filename: pointer to file
 * @letters: number of letter to read and print.
 * Return: number of characters printed
 */
size_t read_textfile(const char *filename, size_t letters)
{
	/**----File descriptor */
	int fd, rd, num_char;
	/** buffer */
	char *buf;
	/** checking filename == NULL */
	if (!filename)
		return (0);
	/** 🛠 create malloc to buffer */
	buf = malloc(sizeof(buf) * letters);
	if (!buf)
		return (0);

	/** 📂 1step read the file */
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	/** 📖read the file */
	rd = read(fd, buf, letters);
	if (rd == -1)
	{
		free(buf);
		close(fd);
		return (0);
	}
	/** --------------- */
	/** ✍🏻 write in the file */
	num_char = write(STDOUT_FILENO, buf, rd);
	if (num_char == -1)
	{
		free(buf);
		close(fd);
		return (0);
	}
	free(buf);
	close(fd);
	/** ⤴️ return amount of letter it could read */
	return (num_char);
}
