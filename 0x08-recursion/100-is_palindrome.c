#include "main.h"

int palicheck(char *s, int i, int len);
int strlen_recu(char *s);


/**
 * is_palindrome - checks if a string is a palindrome or not.
 * @s: The string.
 *
 * Return: 1 if it palindrome, 0 it is not.
 */

int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (palicheck(s, 0, strlen_recu(s)));
}


/**
 * strlen_recu - returns a string length.
 * @s: string.
 *
 * Return: string length.
 */

int strlen_recu(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + strlen_recu(s + 1));
}

/**
 * palicheck - checks for palindrome.
 * @s: The string.
 * @i: iterator.
 * @len: string length.
 *
 * Return: 1 if it palindrome, 0 it is not.
 */

int palicheck(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (palicheck(s, i + 1, len - 1));
}
