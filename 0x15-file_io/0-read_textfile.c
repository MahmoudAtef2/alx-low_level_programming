#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read the text file and print to STDOUT.
 * @filename:the name of the file to be read
 * @letters: number of letters in the file
 *
 * Return: wr- for the number of the bytes readed and printed,
 *        0 if the function fails or filename equal NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t nwr;
	ssize_t nre;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	nre = read(fd, buf, letters);
	nwr = write(STDOUT_FILENO, buf, nre);

	free(buf);
	close(fd);
	return (nwr);
}
