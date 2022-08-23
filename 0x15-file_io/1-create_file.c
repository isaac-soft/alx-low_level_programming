#include "main.h"

/**
 * create_file - Creates a file.
 * @filename: A pointer to the name of the file to create.
 * @text_content: A pointer to a string to write to the file.
 *
 * Return: (-1) On failure/NULL filename (1) On Success.
 */
int create_file(const char *filename, char *text_content)
{
	int o, w, len = 0;

	/* check if filename pointer location is valid */
	if (filename == NULL)
		return (-1);

	/* count the number of char bytes in text_content */
	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	/* open/create file with read and write permission */
	o = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	/* copy files from text content to new file */
	w = write(o, text_content, len);

	/* check if the open and write system call reads correctly */
	if (o == -1 || w == -1)
		return (-1);

	/* close file after usage */
	close(o);

	return (1);
}
