#include "lists.h"
#include <stdlib.h>
/**
 * delete_dnodeint_at_index - deletes the node at index of
 * a doubly linked list.
 * @head: pointer to the head of the doubly linked list.
 * @index: the index of the node to delete (starting from 0).
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
		return (-1);

	/* Case 1: Delete the head node */
	if (index == 0)
	{
		*head = temp->next;
		if (temp->next != NULL)
			temp->next->prev = NULL;
		free(temp);
		return (1);
	}

	/* Traverse the list to find the node to delete */
	while (temp != NULL && i < index)
	{
		temp = temp->next;
		i++;
	}

	/* If the node is not found or the index is out of bounds */
	if (temp == NULL)
		return (-1);

	/* Case 2: Delete a node from the middle or the end */
	if (temp->next != NULL)
		temp->next->prev = temp->prev;
	if (temp->prev != NULL)
		temp->prev->next = temp->next;

	free(temp);
	return (1);
}
