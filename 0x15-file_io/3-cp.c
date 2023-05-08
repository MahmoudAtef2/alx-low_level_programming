#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int fdo);

/**
 * create_buffer - Allocates a buffer.
 * @file: The name of the file buffer.
 *
 * Return:the newly-allocated buffer.
 */
char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buffer);
}

/**
 * close_file - Closes descriptors of the file.
 * @fd: The file descriptor.
 */
void close_file(int fdo)
{
	int g;

	g = close(fdo);

	if (g == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fdo %d\n", fdo);
		exit(100);
	}
}

/**
 * main - Copies a file to another file.
 * @argc: The number of the program arguments supplieded.
 * @argv: the arguments.
 *
 * Return: 0 on (success).
 */
int main(int argc, char *argv[])
{
	int from;
	int to;
	int re;
	int rwi;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = create_buffer(argv[2]);
	from = open(argv[1], O_RDONLY);
	re = read(from, buffer, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from == -1 || re == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		rwi = write(to, buffer, re);
		if (to == -1 || rwi == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		re = read(from, buffer, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);

	} while (re > 0);

	free(buffer);
	close_file(from);
	close_file(to);

	return (0);
}

