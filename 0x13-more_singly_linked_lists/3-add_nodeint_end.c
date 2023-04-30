#include "lists.h"
/**
 * add_nodeint_end - adds a new node at the end
 * @head: pointer
 * @n: data to be inserted
 * Return: pointer or NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *temp = *head;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	if (*head == NULL)
	{
		new->n = n;
		new->next = NULL;
		*head = new;
		return (new);
	}
	while (temp->next)
		temp = temp->next;
	new->n = n;
	new->next = NULL;
	temp->next = new;
	return (new);
}
