#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads a text file and prints it to POSIX stdout.
 * @filename: A pointer to the name of the file.
 * @letters: The number of letters the
 *           function should read and print.
 *
 * Return: 0 (when function fails or filename is NULL)
 *         w - the actual number of letters that can be read and printed.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t o, r, w; /*file descriptors */
	char *buffer; /*temporary storage location */

	if (filename == NULL)
		return (0);

	/* allocating buffer memory */
	buffer = malloc(sizeof(char) * letters);
	/* check if memory created is valid */
	if (buffer == NULL)
		return (0);

	/* open filename */
	o = open(filename, O_RDONLY);
	/* read filenme */
	r = read(o, buffer, letters);
	/* write filename content to stand output */
	w = write(STDOUT_FILENO, buffer, r);

	/* to see of the file descriptors are valid */
	if (o == -1 || r == -1 || w == -1 || w != r)
	{
		free(buffer);
		return (0);
	}

	free(buffer); /* deallocate buffer mememory */
	close(o);

	return (w);
}
