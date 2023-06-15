#include "lists.h"
/**
 * dlistint_len - function thst returns number of elements in linked list
 * @h: const list_t pointer to head of list
 * Return: num of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	int len;

	for (len = 0; h != NULL; len++)
	{
		h = h->next;
	}
	return (len);
}
