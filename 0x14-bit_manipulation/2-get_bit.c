#include "main.h"

/**
 * get_bit -program that returns the value of index in a decimal form.
 * @n:the number
 * @index: index of the numper
 *
 * Return: value of the numper
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bval;

	if (index > 63)
		return (-1);

	bval = (n >> index) & 1;

	return (bval);
}
