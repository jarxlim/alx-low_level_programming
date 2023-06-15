#include "lists.h"

/**
 * add_dnodeint_end - func adds a newnode node at the end of a dlistint_t list.
 * @head: pointer to the head of the list.
 * @n: integer for the newnode node to contain.
 * Return: If the function fails - NULL.
 *         Otherwise - the address of the newnode node.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newnode, *lastnode;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->next = NULL;

	if (*head == NULL)
	{
		newnode->prev = NULL;
		*head = newnode;
		return (newnode);
	}

	lastnode = *head;
	while (lastnode->next != NULL)
		lastnode = lastnode->next;
	lastnode->next = newnode;
	newnode->prev = lastnode;

	return (newnode);
}
