#include "main.h"

/**
 * get_endianness - checks the machine if it is (little or big endian)
 *
 * Return: 0(big), 1(little)
 */
int get_endianness(void)
{
	unsigned int uns = 1;
	char *c = (char *) &uns;

	return (*c);
}
