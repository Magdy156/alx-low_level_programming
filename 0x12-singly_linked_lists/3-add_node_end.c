#include "lists.h"
#include <stdlib.h>
/**
 * add_node_end - adds a new node at the end of a linked list
 * @head: double pointer
 * @str: string
 * Return: pointer
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));
	list_t *current = *head;
	unsigned int len = strlen(str);

	if (!new_node || !head)
		return (0);
	new_node->str = strdup(str);
	new_node->len = len;
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	while (current->next)
		current = current->next;
	current->next = new_node;
	return (new_node);
}
