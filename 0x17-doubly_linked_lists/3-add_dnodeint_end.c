#include "lists.h"
/**
 * add_dnodeint_end - adds a new node
 * at the end of a dlistint_t list
 * @head: the head of dlinked list
 * @n: data to be inserted
 * Return: pointer to the inseted data or NULL
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNode;
	dlistint_t *curr = *head;

	newNode = malloc(sizeof(dlistint_t));
	if (!newNode)
		return (NULL);

	newNode->n = n;
	if (!(*head))
	{
		newNode->next = NULL;
		newNode->prev = NULL;
		*head = newNode;
		return (newNode);
	}

	while (curr->next)
		curr = curr->next;
	newNode->next = NULL;
	newNode->prev = curr;
	curr->next = newNode;
	return (newNode);
}
