#include "lists.h"
/**
 * *add_dnodeint - function that adds new node to beginning of list
 * @head: pointer to pointer of head of linked list
 * @n: int pointer
 * Return: new element, or NULL if failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = NULL;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = (*head);
	new_node->prev = NULL;

	if ((*head) != NULL)
	{
		(*head)->prev = new_node;
	}
	(*head) = new_node;

	return (new_node);
}
