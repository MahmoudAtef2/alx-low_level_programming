#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end
 * @head: pointer to the first element in the list
 * @n: value for new node
 *
 * Return: pointer to the new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnod;
	listint_t *temp = *head;

	newnod = malloc(sizeof(listint_t));
	if (!newnod)
		return (NULL);

	newnod->n = n;
	newnod->next = NULL;

	if (*head == NULL)
	{
		*head = newnod;
		return (newnod);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = newnod;

	return (newnod);
}
