#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list.
 * @h: The linked list_t list.
 *
 * Return: number of elements in the list.
 */

size_t list_len(const list_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		len++;
		h = h->next;
	}
	return (len);
}
