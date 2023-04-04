#include "lists.h"
/**
 * pop_listint - function that deletes the head node of a listint_t linked list
 * and returns the head node’s data (n).
 * @head: pointer to pointer to the head of the linked list
 * Return: the head node’s data (n)., and 0 if the linked list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int data;

	if (*head == NULL)
	{
		return (0);
	}
	else
	{
		tmp = *head;
		data = tmp->n;
		*head = (*head)->next;
		free(tmp);
	}
	return (data);
}
