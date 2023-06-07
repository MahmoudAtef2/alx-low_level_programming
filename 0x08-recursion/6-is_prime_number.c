#include "main.h"

int prime_check(int n, int num);

/**
 * is_prime_number - determinde if an integer is a prime number or not.
 * @n: The number.
 *
 * Return: 1 if the number is a prime , otherwise return 0.
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (prime_check(n, n - 1));
}

/**
 * prime_check - check if a number is a prime,
 * @n: The number.
 * @num: iterator
 *
 * Return: 1 if the number is a prime , otherwise return 0.
 */

int prime_check(int n, int num)
{
	if (num == 1)
	{
		return (1);
	}
	if (n % num == 0 && num > 0)
	{
		return (0);
	}
	return (prime_check(n, num - 1));
}
