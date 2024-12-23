#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t list.
 * @head: pointer to the head of the doubly linked list.
 * @index: index of the node, starting from 0.
 *
 * Return: the address of the nth node, or NULL if the node doesn't exist.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head != NULL)
	{
		if (i == index)
			return (head);  /* Return the node at the given index */
		head = head->next;  /* Move to the next node */
		i++;
	}

	return (NULL);  /* Return NULL if the node doesn't exist */
}
