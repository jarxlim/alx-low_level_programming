#include "lists.h"
#include <stdio.h>

/**
 * add_nodeint_end - function that adds a new node at the end of the list
 * @head: a pointer to a pointer to the head of the listint_t list
 * @n: integer value to be stored in the new node
 * Return: adrress of the new element, or NULL if it fails
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *last_node;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}
	else
	{
		new_node->n = n;
		new_node->next = NULL;
	}
	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		last_node = *head;
		while (last_node->next != NULL)
			last_node = last_node->next;
		last_node->next = new_node;
	}
	return (last_node);
}
