#include "lists.h"
#include <stdio.h>
/**
 * print_listint - function that prints all the elements of a listint_t list.
 * @h: a pointer to the head of the list
 * Return: the number of the nodes in the list
 */
size_t print_listint(const listint_t *h)
{
	size_t counts;

	for (counts = 0; h != NULL; counts++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (counts);
}
