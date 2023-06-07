#include "main.h"

/**
 * factorial - Function that returns the factorial of a given number.
 * @n: number to get the factorial of it.
 *
 * Return: factorial of n
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}

	return (n * factorial(n - 1));
}
