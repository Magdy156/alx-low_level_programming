#include "lists.h"
#include <stdlib.h>
/**
 * add_node - adds a new node at the beginning of a linked list
 * @head: double pointer
 * @str: string
 * Return: pointer to the new head
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_list;
	unsigned int len = strlen(str);

	new_list = malloc(sizeof(list_t));
	if (!new_list || !head)
		return (NULL);
	new_list->str = strdup(str);
	new_list->len = len;
	new_list->next = *head;
	*head = new_list;
	return (*head);
}
