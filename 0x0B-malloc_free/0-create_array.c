#include "main.h"
#include <stdlib.h>

/**
 * create_array -  function that creates array of chars, and initializes it with char.
 * @size: size.
 * @c: char.
 * Return: pointer to array, if fail return ntll.
 *
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int x;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);

	for (x = 0; x < size; x++)
		str[x] = c;
	return (str);
}
