#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: A pointer to the name of the file.
 * @text_content: The string to add to the end of the file.
 *
 * Return: (1) On success, text_content exist
 * (-1) On failure, NULL filename, text_content does not exist
 *		text_content does not have write permision.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, len = 0;

	/* check if filename is valid */
	if (filename == NULL)
		return (-1);

	/* count the number of char bytes to be copied */
	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	/* open/create filename with write only permission */
	/* place the cursor at the end of file for appending operation */
	o = open(filename, O_WRONLY | O_APPEND);
	/* copy content from text_content to filename */
	w = write(o, text_content, len);

	/* check if the file descriptors are valid */
	if (o == -1 || w == -1)
		return (-1);

	/* close created file */
	close(o);

	return (1);
}
