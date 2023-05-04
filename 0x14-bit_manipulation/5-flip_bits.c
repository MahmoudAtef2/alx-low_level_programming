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
	int i, countnum = 0;
	unsigned long int currentnum;
	unsigned long int exclusive = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		currentnum = exclusive >> i;
		if (currentnum & 1)
			countnum++;
	}

	return (countnum);
}
