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
	const listint_t *def = head;
	size_t size = 0;
	size_t i = 0;

	if (size == 0)
	{
		while (def != NULL)
		{
			printf("[%p] %d\n", (void *)def, def->n);
			size++;
		}
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			printf("[%p] %d\n", (void *)def, def->n);
			def = def->next;
		}
		printf("-> [%p] %d\n", (void *)def, def->n);
	}
	return (size);
}
