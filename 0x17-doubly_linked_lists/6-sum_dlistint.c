#include "lists.h"
/**
 * sum_dlistint -  sum of all the data (n) of a dlistint_t linked list
 * @head: head of the linked list
 * Return: returns the sum or 0
*/
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *ptr = head;

	if (!head)
		return (0);

	while (ptr)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}
	return (sum);
}
