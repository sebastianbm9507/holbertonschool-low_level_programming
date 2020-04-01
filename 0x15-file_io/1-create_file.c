#include "holberton.h"
int _strlen(char *s);
/**
 * create_file - creates a file.
 * @filename: name of the file
 * @text_content: content of the file
 * Return: 1 on success , -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	/** file descriptor */
	int fd;
	/** variables to write and len */
	int wr;
	/** check ✅ file name == NULL */
	if (!filename)
	return (-1);
	/** 🛠 create the file with permision */
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
		/** ✅ If fails */
		if (fd == -1)
			return (-1);
		/** ✅ if text content  */
		if (!text_content)
			text_content = "";
	/** ✍🏻Write the file */
	wr = write(fd, text_content, _strlen(text_content));
		if (wr == -1)
			return (wr);
	/** 🔒close open file */
	close(fd);
	/**---⤴️----*/
	return (1);
}
/**
 * _strlen - Finds the stringlength of a string
 * @s: String to take in (char *)
 * Return: Length of the string
 */

int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;

	return (len);
}
