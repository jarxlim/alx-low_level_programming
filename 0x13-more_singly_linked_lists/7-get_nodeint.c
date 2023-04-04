#include "lists.h"
#include <stdio.h>
/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: pointer to the head of the linked list
 * @index: index of the node to return
 * Return: nth node of the list or NULL if the node doest exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int size;

	for (size = 0; size < index; size++)
	{
		if (head == NULL)
		{
			return (NULL);
		}
		else
		{
			head = head->next;
		}
	}
	return (head);
}
