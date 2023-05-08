#include "main.h"

/**
 * create_file - Creates a file.
 * @filename:the name of the file to be create.
 * @text_content: write the file.
 *
 * Return: 1 for success, -1 for fails.
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int rwri;
	int nlet = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (nlet = 0; text_content[nlet];)
			nlet++;
	}

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	rwri = write(fd, text_content, nlet);

	if (fd == -1 || rwri == -1)
		return (-1);

	close(fd);

	return (1);
}
