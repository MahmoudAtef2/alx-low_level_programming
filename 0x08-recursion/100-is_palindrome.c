#include "main.h"

int pali_check(char *s, int i, int l);
int strlen(char *s);

/**
 * is_palindrome - checks if a string is a palindrome or not.
 * @s: The string.
 *
 * Return: 1 if it palindrome, 0 it is not.
 */

int is_palindrome(char *s)
{
	if (*s == 0)
	{
		return (1);
	}
	return (pali_check(s, 0, strlen(s)));
}

/**
 * strlen - returns a string length.
 * @s: string.
 *
 * Return: string length.
 */

int strlen(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + strlen(s + 1));
}

/**
 * pali_check - checks for palindrome.
 * @s: The string.
 * @i: iterator.
 * @l: string length.
 *
 * Return: 1 if it palindrome, 0 it is not.
 */

int pali_check(char *s, int i, int l)
{
	if (*(s + i) != *(s + l - 1))
	{
		return (0);
	}
	if (i >= l)
	{
		return (1);
	}
	return (pali_check(s, i + 1, l - 1));
}
