#include "lists.h"

/**
 * print_listint -  returns the number of elements in a linked listint_t list
 * @h: pointer to linked list
 * Return: the number of nodes
 */
size_t listint_len(const listint_t *h);
{
	size_t i;

	for (i = 0; h != NULL; i++)
		h = h->next;
	return (i);
}
