#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - Adds a new node at the end of a list_t list.
 * @head: Double pointer to the head of the list.
 * @str: String to be duplicated and added as the new node's str.
 *
 * Return: The address of the new element, or NULL if it failed.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *temp;
	char *dup_str;
	unsigned int len = 0;

	if (str == NULL)
		return (NULL);
	/* Duplicate the string */
	dup_str = strdup(str);
	if (dup_str == NULL)
		return (NULL);

	/* Calculate the length of the string */
	while (str[len])
		len++;
	/* Allocate memory for the new node */
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		free(dup_str);
		return (NULL);
	}
	/* Initialize the new node */
	new_node->str = dup_str;
	new_node->len = len;
	new_node->next = NULL;
	/* If the list is empty, make the new node the head */
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	temp = *head; /* Traverse to the end of the list */
	while (temp->next != NULL)
		temp = temp->next;

	temp->next = new_node; /* Add the new node at the end */
	return (new_node);
}
