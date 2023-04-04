#include "lists.h"
/**
 * int delete_nodeint_at_index - function that deletes the node at index index
 * of a listint_t linked list.
 * @head: pointer to pointer of the head node of the listint_t list.
 * @index: is the index of the node that should be deleted.
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp_node, *ref_node = *head;
	unsigned int i = 0;

	if (ref_node == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(ref_node);
		return (1);
	}

	for (i = 0; i < (index - 1); i++)
	{
		if (ref_node->next == NULL)
		{
			return (-1);
		}
		else
		{
			ref_node = ref_node->next;
		}
	}

	temp_node = ref_node->next;
	ref_node->next = temp_node->next;
	free(temp_node);
	return (1);
}
