#include "lists.h"
/**
 * *free_dlistint - function that frees a dlistint_t list
 *
 *@head: pointer to head of linked list
 *
 * Return: void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *node = head;
	dlistint_t *temp;

	while (node != NULL)
	{
		temp = node;
		node = node->next;
		free(temp);
		head = NULL;
	}
}
