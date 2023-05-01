#include "lists.h"

/**
 * listint_len - returns a linked lists
 * @h: linked list of type listint_t to traverse
 *
 * Return: size of list
 */
size_t listint_len(const listint_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}

	return (n);
}


