#include "lists.h"
unsigned int dlistint_length(const dlistint_t *h);
/**
 * get_dnodeint_at_index -  gets the nth node of a dlistint_t linked list
 * @head: head of the list
 * @index: position
 * Return: address or NULL
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	unsigned int length = dlistint_length(head);

	if (index > length - 1)
		return (NULL);
	if (!head)
		return (NULL);
	while (i < index)
	{
		head = head->next;
		i++;
	}
	return (head);
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
