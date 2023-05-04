#include "main.h"

/**
 * binary_to_uint -program that converts a binary to unsigned int
 * @b: string with the binary number
 *
 * Return:the result of cinvirtaing the binary number.
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int unsi = 0;

	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		unsi = 2 * unsi + (b[i] - '0');
	}

	return (unsi);
}
