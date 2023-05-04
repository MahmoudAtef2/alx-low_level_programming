#include "main.h"

/**
 * print_binary - program that prints binary equivalent of a decimal
 * @n: number to print in binary
 */
void print_binary(unsigned long int n)
{
	int i, c = 0;
	unsigned long int cu;

	for (i = 63; i >= 0; i--)
	{
		cu = n >> i;

		if (cu & 1)
		{
			_putchar('1');
			c++;
		}
		else if (c)
			_putchar('0');
	}
	if (!c)
		_putchar('0');
}
