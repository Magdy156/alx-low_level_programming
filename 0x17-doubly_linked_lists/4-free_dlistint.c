#include "lists.h"
/**
 * free_dlistint - frees a dlistint_t list
 * @head: head of the dlinked list
 * Return: Void
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *ptr;

	while (head)
	{
		ptr = head->next;
		free(head);
		head = ptr;
	}
}
