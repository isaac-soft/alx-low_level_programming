#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/* prototypes of functions */
char *create_buffer(char *file);
void close_file(int fd);



/**
 * main - Copies the contents of a file to another file.
 * @argc: The number of commandline arguments.
 * @argv: An array of pointers to the commandline arguments.
 *
 * Return: 0 on success.
 *
 * Description: If the argc < 3 - exit code 97.
 *              If argv[1] does not exist or cannot be read - exit code 98.
 *              If argv[2] cannot be created or written to - exit code 99.
 *              If argv[1] or argv[2] cannot be closed - exit code 100.
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, r, w; /* file descriptors */
	char *buffer; /* pointer to buffer memory */

	/*check if the number of comman line arguments is valid */
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	/* allocate memory to buffer */
	buffer = create_buffer(argv[2]);
	/* open/create file with argv[1] file name and read only permission */
	file_from = open(argv[1], O_RDONLY);
	/* read 1024 bytes from file_from (argv[1] */
	r = read(file_from, buffer, 1024);
	/* open/create file with arg[2] file name with rw-rw-r-- permission */
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	/* code to copy 1024 bytes at a time from file_from */
	do {
		/* check if the file_from and r file descriptor is valid */
		if (file_from == -1 || r == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		/* check if file_to and write file descriptor is valid */
		w = write(file_to, buffer, r);
		if (file_to == -1 || w == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		/* if check is passed read and append 1024 byte again  */
		r = read(file_from, buffer, 1024);
		file_to = open(argv[2], O_WRONLY | O_APPEND);

	} while (r > 0);

	free(buffer); /* deallocate buffer memory */
	/* close the open files */
	close_file(file_from);
	close_file(file_to);

	return (0);
}


/**
 * create_buffer - Allocates 1024 bytes for a buffer.
 * @file: stores 1024 bytes of char to be copied to a file.
 *
 * Return: A pointer to the newly-allocated buffer.
 */
char *create_buffer(char *file)
{
	char *buffer;

	/* allocates buffer memory */
	buffer = malloc(sizeof(char) * 1024);

	/*check if buffer memory is valid */
	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buffer);
}


/**
 * close_file - Closes file descriptors.
 * @fd: The file descriptor to be closed.
 */
void close_file(int fd)
{
	int c;

	c = close(fd);

	/* check if file descriptor can be closed */
	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
