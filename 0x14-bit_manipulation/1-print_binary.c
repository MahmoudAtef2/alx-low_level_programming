#include "main.h"

/**
 * print_binary - program that prints binary equivalent of a decimal
 * @n: number to print in binary
 */
void print_binary(unsigned long int n)
{
	int i, countint = 0;
	unsigned long int currentint;

	for (i = 63; i >= 0; i--)
	{
		currentint = n >> i;

		if (currentint & 1)
		{
			_putchar('1');
			countint++;
		}
		else if (countint)
			_putchar('0');
	}
	if (!countint)
		_putchar('0');
}
