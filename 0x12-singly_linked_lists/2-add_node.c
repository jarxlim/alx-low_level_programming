#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 * add_node - function that adds a new node at the beginning of a list_t list.
 * @head: head of the linked list
 * @str: a string parameter
 * Return: NULL, if funtion fails or else returns a pointer to the new node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	char *new_str;
	int len;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_str = strdup(str);
	if (new_str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	for (len = 0; str[len];)
		len++;

	new_node->str = new_str;
	new_node->len = len;
	new_node->next = *head;

	*head = new_node;

	return (new_node);
}
