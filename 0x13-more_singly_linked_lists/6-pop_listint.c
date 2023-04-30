#include "lists.h"
/**
 * pop_listint - deletes the head node
 * @head: pointer
 * Return: the head node’s data
 */
int pop_listint(listint_t **head)
{
	listint_t *temp = *head;
	int data;

	if (!head || !*head)
		return (0);
	data = temp->n;
	temp = temp->next;
	free(*head);
	*head = temp;
	return (data);
}
