#include "lists.h"
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: pointer to the head of the doubly linked list.
 * @idx: the index where the new node should be added (starts from 0).
 * @n: the data to store in the new node.
 *
 * Return: the address of the new node, or NULL if it failed or if the index
 *         is invalid (i.e., the list is shorter than the given index).
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *temp = *h;
	unsigned int i = 0;

	if (h == NULL)
		return (NULL);

	/* Handle insertion at the beginning of the list (index 0) */
	if (idx == 0)
		return (add_dnodeint(h, n));

	/* Traverse to the position before the given index */
	while (temp != NULL && i < idx - 1)
	{
		temp = temp->next;
		i++;
	}

	/* If the index is out of bounds, return NULL */
	if (temp == NULL)
		return (NULL);

	/* Create the new node */
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = temp->next;
	new_node->prev = temp;

	/*
	 * If we are inserting at the end of the list,
	 * iupdate the last node's next pointer
	 */
	if (temp->next != NULL)
		temp->next->prev = new_node;

	temp->next = new_node;

	return (new_node);
}
