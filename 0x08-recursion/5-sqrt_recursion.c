#include "main.h"

int actual_sqrt(int n, int num);

/**
 * _sqrt_recursion - Function that returns the natural square root of a number.
 * @n: number.
 *
 * Return: the resulting of square root.
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (actual_sqrt(n, 0));
}

/**
 * actual_sqrt - Function to find the natural square root.
 *
 * @n: number.
 * @num: iterator
 *
 * Return: square root result.
 */

int actual_sqrt(int n, int num)
{
	if (num * num > n)
	{
		return (-1);
	}
	if (num * num == n)
	{
		return (num);
	}
	return (actual_sqrt(n, num + 1));
}
