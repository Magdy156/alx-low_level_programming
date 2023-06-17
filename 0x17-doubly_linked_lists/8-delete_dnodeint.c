#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes the node at index
 * index of a dlistint_t linked list
 * @head: head of the lindked list
 * @index: index
 * Return: 1 or -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *ptr = *head;

	if (*head == NULL)
		return (-1);

	for (; index != 0; index--)
	{
		if (ptr == NULL)
			return (-1);
		ptr = ptr->next;
	}

	if (ptr == *head)
	{
		*head = ptr->next;
		if (*head != NULL)
			(*head)->prev = NULL;
	}

	else
	{
		ptr->prev->next = ptr->next;
		if (ptr->next != NULL)
			ptr->next->prev = ptr->prev;
	}

	free(ptr);
	return (1);
}
