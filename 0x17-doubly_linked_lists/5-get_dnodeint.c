#include "lists.h"
/**
 * get_dnodeint_at_index -  gets the nth node of a dlistint_t linked list
 * @head: head of the list
 * @index: position
 * Return: address or NULL
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (!head)
		return(NULL);
	while (i < index)
	{
		head = head->next;
		i++;
	}
	return (head);
}
