#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_listint_safe - function that prints a listint_t linked list.
 * @head: Pointer to the head node of the list
 *
 * Return: The number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *node = head, *current;
	size_t size;

	for (size = 0; node != NULL; size++)
	{
		printf("[%p] %d\n", (void *)node, node->n);
		if (node > node->next)
		{
			current = node;
			node = node->next;
			free(current);
			printf("-> [%p] %d\n", (void *)node, node->n);
			break;
		}
		node->n = node->n - 1024;
		node = node->next;
	}
	if (node != NULL && node == head)
	{
		printf("-> [%p] %d\n", (void *)node, node->n);
		return (size);
	}
	exit(98);
}
