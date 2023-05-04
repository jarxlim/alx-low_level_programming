#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
size_t listint_count(listint_t *head);
size_t free_listint_safe(listint_t **h);
/**
 * looped_listint_count - Counts the number of unique node
 * @head: A pointer to the head of the listint_t to check.
 *
 * Return: If the list is not looped - 0.
 */
size_t listint_count(listint_t *head)
{
	listint_t *t, *h;
	size_t node = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	t = head->next;
	h = (head->next)->next;

	while (h)
	{
		if (t == h)
		{
			t = head;
			while (t != h)
			{
				node++;
				t = t->next;
				h = h->next;
			}

			t = t->next;
			while (t != h)
			{
				node++;
				t = t->next;
			}

			return (node);
		}

		t = t->next;
		h = (h->next)->next;
	}

	return (0);
}

/**
 * free_listint_safe - Frees a listint_t list safely
 * @h: A pointer 
 * Return: The size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *tmp;
	size_t node, i;

	node = listint_count(*h);

	if (node == 0)
	{
		for (; h != NULL && *h != NULL; node++)
		{
			tmp = (*h)->next;
			free(*h);
			*h = tmp;
		}
	}

	else
	{
		for (i = 0; i < node; i++)
		{
			tmp = (*h)->next;
			free(*h);
			*h = tmp;
		}

		*h = NULL;
	}

	h = NULL;

	return (node);
}
