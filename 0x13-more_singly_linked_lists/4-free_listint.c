#include "lists.h"
#include <stdio.h>
/**
 * free_listint - function that frees a listint_t list.
 * @head: pointer to the head node of the listint_t list.
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head->next = head;
		free(temp);
	}
}
