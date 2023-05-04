#include "main.h"

/**
 * set_bit - sets a bit at a given index to 1
 * @n: pointer to change a numper.
 * @index:the index of  bit to set to (1).
 *
 * Return: 1 equal success, -1 equal erorr.
 */
int set_bit(unsigned long int *n, unsigned int index)

int clear_bit(unsigned long int *number, int index)
{
	if (index > 63) {
	return -1;
}
	unsigned long int mask = ~(1UL << index);

	*number = (*number & mask);
	return 1;
}
