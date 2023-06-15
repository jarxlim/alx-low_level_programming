#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - function that prints all elements of dlistint_t list
 * @h: pointer to head of the linked list
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	int count;

	for (count = 0; h != NULL; count++)
	{
		printf("%i\n", h->n);
		h = h->next;
	}
	return (count);
}
