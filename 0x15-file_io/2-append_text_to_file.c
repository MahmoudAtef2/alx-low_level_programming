#include "main.h"

/**
 * append_text_to_file - appends the text at the end of the file.
 * @filename: the name of the file.
 * @text_content: The file string to add to the end.
 *
 * Return: -1 If the function fails or NULL.
 *         1 if the file exiists.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fdo;
	int rwri;
	int nlet = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (nlet = 0; text_content[nlet];)
			nlet++;
	}

	fdo = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, nlet);

	if (fdo == -1 || rwri == -1)
		return (-1);

	close(fdo);

	return (1);
}
