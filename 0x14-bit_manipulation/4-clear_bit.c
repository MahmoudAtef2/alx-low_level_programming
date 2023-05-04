#include "main.h"

/**
 * clear_bit - sets the value of a given bit to 0
 * @n: pointer to change a numper
 * @index: index to clear of the bit.
 *
 * Return: 1 equal success, -1 equal erorr.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}

