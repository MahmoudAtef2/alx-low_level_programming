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
	char *ch;
	ssize_t fileo;
	ssize_t wr;
	ssize_t re;

	fileo = open(filename, O_RDONLY);
	if (fileo == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	re = read(fileo, ch, letters);
	wr = write(STDOUT_FILENO, ch, re);

	free(ch);
	close(fileo);
	return (wr);
}
