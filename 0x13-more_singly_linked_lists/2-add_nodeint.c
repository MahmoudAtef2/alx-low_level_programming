#include "lists.h"

/**
 * add_nodeint - adds a node at the beginning
 * @head: pointer to the first node in the list
 * @n: value for new node
 *
 * Return: pointer to the new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnod;

	newnod = malloc(sizeof(listint_t));
	if (!newnod)
		return (NULL);

	newnod->n = n;
	newnod->next = *head;
	*head = newnod;

	return (newnod);
}

