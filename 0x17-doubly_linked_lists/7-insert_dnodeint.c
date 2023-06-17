#include "lists.h"
unsigned int dlistint_length(const dlistint_t *h);
/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: head of the linked list
 * @idx: index
 * @n: value to be inserted
 * Return: address or NULL
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newNode, *ptr = *h;
	unsigned int length = dlistint_length(*h), i = 0;

	if (idx > length - 1)
		return (NULL);

	newNode = malloc(sizeof(dlistint_t));
	if (!newNode)
		return (NULL);
	
	if (ptr->next == NULL)
		return (add_dnodeint_end(h, n));
	newNode->n = n;

	while (i < idx)
	{
		ptr = ptr->next;
		i++;
	}
	newNode->next = ptr->next;
	newNode->prev = ptr;
	ptr->next->prev = newNode;
	ptr->next = newNode;
	return (newNode);
}

/**
 * dlistint_length -  returns the number of elements i
 * @h: the head of dlinked list to be printed
 * Return: the number of nodes
*/
unsigned int dlistint_length(const dlistint_t *h)
{
	unsigned int counter = 0;

	if (!h)
		return (0);
	while (h)
	{
		h = h->next;
		counter++;
	}
	return (counter);
}
