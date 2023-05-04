#include "main.h"

/**
 * binary_to_uint -program that converts a binary to unsigned int
 * @b: string with the binary number
 *
 * Return:the result of cinvirtaing the binary number.
 */
unsigned int binary_to_uint(const char *b)
{
	int x;
	unsigned int bi = 0;

	if (!b)
		return (0);

	for (x = 0; b[x]; x++)
	{
		if (b[x] < '0' || b[x] > '1')
			return (0);
		bi = 2 * bi + (b[x] - '0');
	}

	return (bi);
}
