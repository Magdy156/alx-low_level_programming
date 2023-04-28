#include "lists.h"
#include <stdlib.h>

/**
 * free_list - frees a linked list
 * @head: pointer
 */
void free_list(list_t *head)
{
	list_t *current;

	while (head)
	{
	current = head->next;
	free(head->str)
	free(head);
	head = current;
	}
}
