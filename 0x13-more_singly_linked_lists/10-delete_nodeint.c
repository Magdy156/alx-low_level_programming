#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node by index
 * @head: pointer
 * @index: index of the node to be deleted
 * Return: 1 (success), or -1 (fail)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	listint_t *ptr = NULL;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	while (i < index - 1)
	{
		if (!(temp->next))
			return (-1);
		temp = temp->next;
		i++;
	}


	ptr = temp->next;
	temp->next = ptr->next;
	free(ptr);

	return (1);
}
