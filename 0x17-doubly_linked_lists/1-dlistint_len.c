#include "lists.h"

/**
 * dlistint_len -  returns the number of elements i
 * @h: the head of dlinked list to be printed
 * Return: the number of nodes
*/
size_t dlistint_len(const dlistint_t *h)
{
	size_t counter = 0;

	if (!h)
		return (0);
	while (h)
	{
		h = h->next;
		counter++;
	}
	return (counter);
}
