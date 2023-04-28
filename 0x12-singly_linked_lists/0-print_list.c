#include "lists.h"
/**
 * print_list -  prints all the elements of a list_t list
 * @h: pointer
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t i = 0;

	for (; h; i++)
	{
		printf("[%ld] %s\n", strlen(h->str), h->str ? h->str : "(nil)");
		h = h->next;
	}
	return (i);
}
