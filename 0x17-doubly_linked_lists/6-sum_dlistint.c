#include "lists.h"
/**
 * sum_dlistint - function that returns sum of all data of a list
 * @head: pointer to head of linked list
 * Return: 0 if empty
 */

int sum_dlistint(dlistint_t *head)
{
	int i = 0;

	while (head)
	{
		i += head->n;
		head = head->next;
	}
	return (i);
}
