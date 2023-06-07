#include "main.h"
#include <unistd.h>

/**
 * _putchar - Function that writes a single character c.
 * @c: The character.
 *
 * Return: the charscter to be printed.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

