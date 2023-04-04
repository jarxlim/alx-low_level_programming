#include "lists.h"
/**
 * free_listint2 - function that frees a listint_t list.
 * @head: pointer to pointer of the head node of the listint_t list.
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
	{
		return;
	}
	while (*head != NULL)
	{
		*head = temp;
		temp = (*head)->next;
		free(*head);
	}
	head = NULL;
}
