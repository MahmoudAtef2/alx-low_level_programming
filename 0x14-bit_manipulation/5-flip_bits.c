#include "main.h"

/**
 * flip_bits - counts the number of bits to change
 * to get from one number to another
 * @n:number one
 * @m:number two
 *
 * Return: number of changed bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int x, num = 0;
	unsigned long int cu;
	unsigned long int ex = n ^ m;

	for (x = 63; x >= 0; x--)
	{
		cu = ex >> i;
		if (cu & 1)
			num++;
	}

	return (num);
}

