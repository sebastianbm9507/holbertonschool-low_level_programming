#include "holberton.h"
int _strlen(char *s);
/**
 * append_text_to_file - append text to file at the end
 * @filename: file of the name
 * @text_content: contento to the file.
 * Return: 1 on succes, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	/** file descriptor */
	int fd, wr;
	/** ✅ checking filename */
	if (!filename)
		return (-1);
	/** ✅ checking text_content */
	if (!text_content)
		return (1);
	/**  📖✍🏻 Settings permision to read and write and append to the end */
	fd = open(filename, O_RDWR | O_APPEND);
		if (fd == -1)
			return (-1);

	/** ✍🏻 write in the file */
	/** 1️⃣ argument: file descriptor */
	/** 2️⃣ argument: buffer to be inserted in the filedescriptor */
	/** 3️⃣ argument: Quantity of bytes to be inserted. */
	wr = write(fd, text_content, _strlen(text_content));
		if (wr == -1)
		{
			close(fd);
			return (-1);
		}

	/** 🔒close the file */
	close(fd);
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
