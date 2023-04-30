#include "lists.h"

/**
 * get_nodeint_at_index - returns node by index
 * @head: pointer
 * @index: index of the node to be returned
 * Return: pointer
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = head;

	for (; temp && i < index; i++)
		temp = temp->next;

	return (temp ? temp : NULL);
}
