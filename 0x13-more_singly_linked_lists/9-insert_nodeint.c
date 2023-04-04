#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: pointer to pointer of the head node of the listint_t list.
 * @idx: is the index of the list where the new node should be added
 * @n: integer value for the new node to contain
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *ref_node = *head;
	unsigned int i;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	for (i = 0; i < (idx - 1); i++)
	{
		if (ref_node == NULL || ref_node->next == NULL)
			return (NULL);
		ref_node = ref_node->next;
	}

	new_node->next = ref_node->next;
	ref_node->next = new_node;

	return (new_node);
}
