#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data (n) of a dlistint_t list.
 * @head: pointer to the head of the doubly linked list.
 *
 * Return: the sum of all the data (n), or 0 if the list is empty.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;  /* Add the data (n) of the current node */
		head = head->next;  /* Move to the next node */
	}

	return (sum);  /* Return the final sum */
}
