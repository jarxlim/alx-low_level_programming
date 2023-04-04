#include "lists.h"
/**
 * reverse_listint - function that reverses a listint_t linked list.
 * @head: pointer to pointer of the head node of the listint_t list.
 * Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp = NULL, *cur_node = *head, *next;

	while (cur_node != NULL)
	{
		next = cur_node->next;
		cur_node->next = temp;
		temp = cur_node;
		cur_node = next;
	}
	*head = temp;
	return (*head);
}
